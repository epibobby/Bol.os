#include "server.h"

Server::Server(QObject* parent): QObject(parent)
{
    std::cout << "Welcome to the Bol.OS server\n\nWaiting for clients . . .\n";
    connect(&server, SIGNAL(newConnection()),
            this, SLOT(acceptConnection()));
    nb_client = 0;
    server.listen(QHostAddress::Any, 25493);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(_PING_()));
    timer->start(20000);
}

Server::~Server()
{
    server.close();
}


bool Server::init_client(client *new_c, QTcpSocket *sock)
{
    std::cout << "INIT_CLIENT" << std::endl;
    new_c->setSock(sock);
    if (!l_client.empty())
    {
        if (check_ip(sock->peerAddress()))
        {
            new_c->setIp(new_c->getSock()->peerAddress());
            return true;
        }
        else
            return false;
    }
    else
    {
        new_c->setIp(new_c->getSock()->peerAddress());
        return true;
    }
}

bool    Server::check_ip(QHostAddress ip)
{
    std::cout << "CHECK_IP" << std::endl;
    for (int i = 0; i < l_client.size(); i++)
    {
        if (ip.toString() == l_client[i]->getIp())
            return false;
    }
    return true;
}

//void    Server::list_client()
//{
//    std::cout<< "LISTE_CLIENT" << std::endl;
//    if (!l_client.empty())
//    {
//        for (std::list<client>::iterator it = l_client.begin(); it != l_client.end(); it++)
//        {
//            std::cout << (*it).getToken().toStdString() << std::endl;
//            std::cout << (*it).getIp().toStdString() << std::endl;
//        }
//        std::cout << "Voila le nombre de client : " <<  nb_client << std::endl;
//    }
//}

void Server::deco()
{
    std::cout << " DECO " << std::endl;
    sock  = qobject_cast<QTcpSocket *>(sender());
    if (sock == 0)
        return;
    else
    {
        if (!l_client.empty())
        {
            int i = 0;
            while (i < l_client.size())
            {
                if (l_client[i]->getSock() == sock)
                    break;
                i++;
            }
            l_client.removeAt(i);
            std::cout << "VOILA LE NB DE CLIENT DANS LA LISTE : " << l_client.size() << std::endl;
            nb_client--;
            std::cout << "nb client : " << nb_client << std::endl;
        }
        else
            return;
    }
}


void Server::acceptConnection()
{
    std::cout << "ACCEPT_CONNECTION " << std::endl;
    c_new = new client;
    sock = server.nextPendingConnection();
    if (init_client(c_new, sock))
    {
        nb_client++;
        l_client.push_back(c_new);
        connect(sock, SIGNAL(readyRead()),
                this, SLOT(startRead()));
        connect(sock, SIGNAL(disconnected()),
                this ,SLOT(deco()));
        //delete c_new;
        std::cout << "Je delete oui oui oui" << std::endl;
    }
    else
        std::cout << "Connection error same IP" << std::endl;
}

QString Server::generate_token(client *c_new)
{
    std::cout << "GENERATE_TOKEN" << std::endl;
    QByteArray ip;
    ip.append(c_new->getIp().toAscii());
    QByteArray hash = QCryptographicHash::hash(ip,QCryptographicHash::Md5);

    QString tok;
    tok = hash.toHex();
    return tok;
}

//void Server::write_token(client *c_new)
//{
//    std::cout << "WRITE_TOKEN " << std::endl;
//    QByteArray paquet;
//    QDataStream out(&paquet, QIODevice::WriteOnly);
//    QString token;
//    token = generate_token(c_new);
//    out << (quint16) 0;
//    out << token;
//    out.device()->seek(0);
//    out << (quint16) (paquet.size() - sizeof(quint16));
//    sock->write(paquet);
//}

void Server::write(QTcpSocket *sock)
{
    std::cout << "WRITE" << std::endl;
    QByteArray paquet;
    QDataStream out(&paquet, QIODevice::WriteOnly);

    out << (quint16) 0;
    out << w_buff;
    out.device()->seek(0);
    out << (quint16) (paquet.size() - sizeof(quint16));

    std::cout << w_buff.toStdString() << std::endl;

    sock->write(paquet);
}

bool Server::check_and_do()
{
    std::cout << "CHECK_AND_DO" << std::endl;
    ptr_func    tab[]={
        //{R_GETUSERLIST, &Server::_R_USERLIST_},
        //        {R_GETUSERINFO, &Server::_R_USERINFO_},
        //        {R_SETSTATE, &Server::_R_SETLOCATION_},
        //        {R_GETMOVIEINFO, &Server::_R_MOVIE_},
        //        {R_DISCONNECT, &Server::},
        //        {R_SET_COMMENT, &Server::},
        //        {R_GET_COMMENT, &Server::},
        //        {R_SET_NOTE, &Server::},
        //        {R_MSG, &Server::},
        //        {R_SETLOCATION, &Server::},
        //        {R_RECOMMANDATION, &Server::},
        //        {R_GET_COMMENT, &Server::},
        {R_AUTH, &Server::_R_SETTOKEN_},
        {R_PONG, &Server::_PONG_}
    };
    for (unsigned int i = 0; i < (sizeof(tab) / sizeof(*tab)); i++)
    {
        if (tab[i].cmd == r_buff[0])
        {
            call(*this, tab[i].func)();
            std::cout << "coucou " << std::endl;
            return true;
        }
    }
    return false;
}

void Server::startRead()
{
    std::cout << "START_READ" <<std::endl;
    sock  = qobject_cast<QTcpSocket *>(sender());
    if ( sock == 0)
        return;
    else
    {
        RequestType rqst;
        QString r_buff;
        for (int i = 0; i < l_client.size(); i++)
        {
            if (l_client[i]->getSock() == sock)
            {
                std::cout << "TU LE VOIS TON IF????\n";
                //tmp = sock->readAll();
                //QDataStream in(sock);
                char buff[1024];
                int btav = sock->bytesAvailable();
                std::cout << "Voila les byte avaible : " << btav << std::endl;
                sock->read(buff, btav);
                std::cout << "LA SOCK EST : " << sock->isValid() <<  std::endl;
                r_buff.append(buff);
               //in.setVersion(QDataStream::Qt_4_0);
               //in >> r_buff;
                break;
            }
        }
        //memcpy(&rqst, tmp.data(), sizeof(RequestType));
        rqst = (RequestType)tmp.data()[0];
        std::cout << "BUFF TOTAL" << r_buff.toStdString() << std::endl;
        UserInfo tmp2;
        memcpy(&tmp2, tmp.data()+1, sizeof(UserInfo));
        std::cout <<  "VOILA L'ENUM DE SA GRAND MAMAN : "<< rqst << std::endl;
        //std::cout <<  "VOILA L'ENUM DE SA GRAND MAMAN : "<< tmp2.location.toStdString() << std::endl;
        //std::cout <<  "VOILA LAMAMAMA DE SA GRAND MAMAN : "<< tmp2.login.toStdString() << std::endl;
        //std::cout <<  "VOILA L'ENUM DE SA GRAND MAMAN : "<< tmp2.state << std::endl;
        exit(EXIT_SUCCESS);
        //std::cout << "Voila le read : " << r_buff.toStdString() << std::endl;
        //        if (r_buff.compare("exit\n") == 0)
        //        {
        //            server.close();
        //            std::cout << "bye bye" << std::endl;
        //            exit(EXIT_SUCCESS);
        //        }
        check_and_do();
    }
}
