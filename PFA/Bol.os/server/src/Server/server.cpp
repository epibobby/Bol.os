#include "server.h"
#include <iostream>
#include <sstream>

using namespace std;

Server::Server(QObject* parent): QObject(parent)
{
  connect(&server, SIGNAL(newConnection()),
    this, SLOT(acceptConnection()));
    nb_client = 0;
  server.listen(QHostAddress::Any, 42000);
}

Server::~Server()
{
  server.close();
}

void Server::add_to_list(client *new_c)
{
    l_client.push_back(new_c);
}

bool Server::init_client(client *new_c, QTcpSocket *sock)
{
    QString     nb;
    std::stringstream out;
    out << nb_client;
    nb = out.str().c_str();
    new_c->setName(nb);
    new_c->setSock(sock);
    if (!l_client.empty())
        if (check_ip(new_c->getSock()->peerAddress()))
        {
            new_c->setIp(new_c->getSock()->peerAddress());
            return true;
        }
        else
        {
            sock->close();
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
        for (std::list<client *>::iterator it = l_client.begin(); it != l_client.end(); it++)
            if (ip.toString() == (*it)->getIp())
                return false;
return true;
}

void    Server::list_client()
{
    if (!l_client.empty())
    {
        for (std::list<client *>::iterator it = l_client.begin(); it != l_client.end(); it++)
        {
            std::cout << (*it)->getName().toStdString() << std::endl;
            std::cout << (*it)->getIp().toStdString() << std::endl;
        }
    }
}

void Server::acceptConnection()
{
    QTcpSocket *nw;
    c_new = new client;
    nw = server.nextPendingConnection();
    if (init_client(c_new, nw))
    {
    nb_client++;
    add_to_list(c_new);
    list_client();
    connect(c_new->getSock(), SIGNAL(readyRead()),
        this, SLOT(startRead()));
    }
    else
        std::cout << "Connection error same IP" << std::endl;
}

void Server::startRead()
{
  //char buffer[1024] = {0};
  //client->read(buffer, client->bytesAvailable());
  //cout << buffer << endl;
  //client->close();
}
