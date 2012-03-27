#include "client.h"

void    client::setSock(QTcpSocket *socket)
{
    sock = socket;
}

QTcpSocket  *client::getSock() const
{
    return sock;
}

void    client::setName(QString nam)
{
 name = nam;
}

QString client::getName() const
{
    return name;
}

void    client::setIp(QHostAddress IP)
{
    ip = IP.toString();
}

QString client::getIp() const
{
    return ip;
}
