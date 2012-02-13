#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>
#include <iostream>
#include <QHostAddress>

class client
{
public:
    client() { }
    ~client() { }
    void        setSock(QTcpSocket *socket);
    QTcpSocket  *getSock() const;
    void        setToken(QString tok);
    QString     getToken() const;
    void        setIp(QHostAddress IP);
    QString     getIp() const;

private:
    QString token;
    QTcpSocket* sock;
    QString ip;
};

#endif // CLIENT_H
