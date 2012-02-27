#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>
#include <iostream>
#include <QHostAddress>
#include <QTimer>
#include "protocole.h"

class client
{
public:
    client():ping(true) { }
    ~client() { std::cout << "Client dead" << std::endl; }

        // getteur
    QTcpSocket  *getSock() const;
    QString     getIp() const;
    QString     getToken() const;
    QString     getLocation() const;
    QString     getLogin() const;
    bool        getPing() const;
    State       getState() const;
    UserInfo    getInfo() const;


        //setteur
    void        setPing(bool pg);
    void        setSock(QTcpSocket *socket);
    void        setToken(QString tok);
    void        setIp(QHostAddress IP);
    void        setLocation(QString Locate);
    void        setLogin(QString log);
    void        setState(State stat);

private:

    QTcpSocket*     sock;
    QString         ip;
    UserInfo        user;
    bool            ping;

};

#endif // CLIENT_H
