#include "server.h"

Server::Server(QObject* parent): QObject(parent)
{
    std::cout << "Welcome to the Bol.OS server\n\nWaiting for clients . . .\n";
    connect(&server, SIGNAL(newConnection()),
            this, SLOT(acceptConnection()));
    nb_client = 0;
    server.listen(QHostAddress::Any, 25493);
}

Server::~Server()
{
    server.close();
}

void Server::add_to_list(client *new_c)
{
    std::cout << "ADD_TO_LIST" << std::endl;
    l_client.push_back(new_c);
}

bool Server::init_client(client *new_c, QTcpSocket *sock)
{
    std::cout << "INIT_CLIENT" << std::endl;
    QString     nb;
    std::stringstream out;
    out << nb_client;
    nb = out.str().c_str();
    new_c->setSock(sock);
    std::cout << "INIT \n";
    bool io = l_client.empty();
    if (!io)
    {
        std::cout << "if init\n";
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
    std::cout << "check_ip\n";
    for (std::list<client *>::iterator it = l_client.begin(); it != l_client.end(); it++)
    {
        if (ip.toString() == (*it)->getIp())
            return false;
    }
    return true;
}

void    Server::list_client()
{
    std::cout<< "LISTE_CLIENT" << std::endl;
    if (!l_client.empty())
    {
        for (std::list<client *>::iterator it = l_client.begin(); it != l_client.end(); it++)
        {
            std::cout << (*it)->getToken().toStdString() << std::endl;
            std::cout << (*it)->getIp().toStdString() << std::endl;
        }
    }
}

void Server::deco()
{
    std::cout << " DECO " << std::endl;
    sock  = qobject_cast<QTcpSocket *>(sender());
    if (sock == 0)
        return;
    else
    {
        std::list<client *>::iterator it;
        for (it = l_client.begin(); it != l_client.end();it++)
        {
            if ((*it)->getSock() == sock)
            {
                std::cout <<  (*it)->getToken().toStdString() <<" Close the connection" << std::endl;
                break;
            }
        }
        (*it)->getSock()->close();
        l_client.erase(it);
        nb_client--;
    }
}


//void Server::synchro_client(client *c_new)
//{

//}

void Server::acceptConnection()
{
    std::cout << "ACCEPT_CONNECTION " << std::endl;
    c_new = new client;
    sock = server.nextPendingConnection();
    if (init_client(c_new, sock))
    {
        nb_client++;
        write_token(c_new);
        //synchro_client(c_new);
        add_to_list(c_new);
        list_client();
        connect(sock, SIGNAL(readyRead()),
                this, SLOT(startRead()));
        connect(sock, SIGNAL(disconnected()),
                this ,SLOT(deco()));
    }
    else
        std::cout << "Connection error same IP" << std::endl;
}

QString Server::generate_token(client *c_new)
{
    std::cout << c_new->getIp().toStdString() << std::endl;
    QByteArray ip;
   ip.append(c_new->getIp().toAscii());
    QByteArray hash = QCryptographicHash::hash(ip,QCryptographicHash::Md5);

    QString tok;
    tok = hash.toHex();
    std::cout << "Nouveau token : " <<  tok.toStdString() << std::endl;
    return tok;
}

void Server::write_token(client *c_new)
{
    std::cout << "WRITE_TOKEN " << std::endl;
    QByteArray paquet;
    QDataStream out(&paquet, QIODevice::WriteOnly);
    QString token;

    token = generate_token(c_new);
    out << (quint16) 0;
    out << token;
    out.device()->seek(0);
    out << (quint16) (paquet.size() - sizeof(quint16));

    sock->write(paquet);
}

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
    w_buff.clear();
}

void Server::startRead()
{
    std::cout << "START_READ" <<std::endl;
    sock  = qobject_cast<QTcpSocket *>(sender());
    if ( sock == 0)
        return;
    else
    {
        char buffer[1024];
        std::list<client *>::iterator it;
        for (it = l_client.begin(); it != l_client.end();it++)
        {
            if ((*it)->getSock() == sock)
            {
                (*it)->getSock()->read(buffer, (*it)->getSock()->bytesAvailable());
                break;
            }
        }
        r_buff.append(buffer);
        std::cout << "Voila le read : " << r_buff.toStdString() << std::endl;
    }
}
