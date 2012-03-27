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
    void        setName(QString nam);
    QString     getName() const;
    void        setIp(QHostAddress IP);
    QString     getIp() const;

private:
    QString name;
    QTcpSocket* sock;
    QString ip;
};

#endif // CLIENT_H
