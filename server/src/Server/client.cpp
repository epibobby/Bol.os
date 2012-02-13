#include "client.h"

void    client::setSock(QTcpSocket *socket)
{
    sock = socket;
}

QTcpSocket  *client::getSock() const
{
    return sock;
}

void    client::setToken(QString tok)
{
 token = tok;
}

QString client::getToken() const
{
    return token;
}

void    client::setIp(QHostAddress IP)
{
    ip = IP.toString();
}

QString client::getIp() const
{
    return ip;
}
