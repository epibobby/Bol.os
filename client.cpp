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
    user.token = tok;
}

QString client::getToken() const
{
    return user.token;
}

void    client::setIp(QHostAddress IP)
{
    ip = IP.toString();
}

QString client::getIp() const
{
    return ip;
}

void    client::setLocation(QString Locate)
{
    user.location = Locate;
}

QString client::getLocation() const
{
    return user.location;
}

void    client::setState(State stat)
{
    user.state = stat;
}

State   client::getState() const
{
    return user.state;
}

void    client::setLogin(QString log)
{
    user.login = log;
}

QString client::getLogin() const
{
    return user.login;
}

bool    client::getPing() const
{
    return ping;
}

void    client::setPing(bool pg)
{
    ping = pg;
}

UserInfo client::getInfo() const
{
    return user;
}
