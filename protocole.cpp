#include "Server.h"

void      Server::check_ping()
{
    for (int i = 0; i < l_client.size(); i++)
        if (!l_client[i]->getPing())
        {
            l_client[i]->getSock()->close();
            l_client.removeAt(i);
        }
}

void      Server::_PING_()
{
    if (!l_client.empty())
    {
        std::cout << "_PING_" << std::endl;
        //check_ping();
        w_buff.clear();
        RequestType rqst = R_PING;
        char    tmp[1];
        memcpy(tmp, &rqst, sizeof(RequestType));
        w_buff.append(tmp);
        for (int i = 0; i < l_client.size(); i++)
        {
            std::cout << (RequestType)w_buff.toStdString().c_str()[0] << std::endl;
            write(l_client[i]->getSock());
            l_client[i]->setPing(false);
        }
        timer->start(10000);
    }
}

void    Server::_PONG_()
{
    if (sock == 0)
        return;
    else
        for (int i = 0; i < l_client.size(); i++)
            if (l_client[i]->getSock() == sock)
                if (!l_client[i]->getPing())
                {
                    l_client[i]->setPing(true);
                    break;
                }
}

void    Server::_R_SETTOKEN_()
{
    if (sock == 0)
        return;
    else
    {
        if (!l_client.empty())
        {
            std::cout << "R_SETTOKEN" << std::endl;
            UserInfo    tmp;
            int i = 0;
            memcpy(&tmp, r_buff.toStdString().c_str()+1, sizeof(UserInfo));
            //std::cout << tmp.login.toStdString() << std::endl;
            for (int i = 0; i < l_client.size(); i++)
                if (l_client[i]->getSock() == sock)
                {
                    sock->write("CONNARD\n");
                    break;
                }
            std::cout << "VOILA LE READ : " << r_buff.toStdString() << std::endl;
            l_client[i]->setLogin(tmp.login);
            l_client[i]->setLocation(tmp.location);
            l_client[i]->setState(tmp.state);
            std::cout << "MID FUNC" << std::endl;
            QString token;
            char    fmr[512];
            token = generate_token(l_client[i]);
            fmr[0] = R_SETTOKEN;
            memcpy(fmr+1, token.toStdString().c_str(), sizeof(token));
            w_buff.append(fmr);
            std::cout << "Voila le buff : " << w_buff.toStdString() << std::endl;
            std::cout << "VOILA LE BUUUUUUUFFFFFFFF \n";
            write(sock);
            std::cout << "FAULT ICI" << std::endl;
        }
    }
}

//void    Server::_R_USERLIST_()
//{
//    if (sock != 0)
//    {
//        if (!l_client.empty() && nb_client != 0)
//        {
//            UserInfo tmp;
//            char     fmr[512];

//           for (int i = 0; i < l_client.size(); i++)
//                if (l_client[i]->getSock() == sock)
//                {
//                    break;
//                }
//        }
//    }
//    else
//        return;
//}
