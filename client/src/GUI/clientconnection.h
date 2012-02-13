#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H

#include "../../../common/src/Protocole/Protocole.h"
#include <QTcpSocket>

class ClientConnection
{
public:
    ClientConnection(Login, IP, Port, State, Token);
    void auth();
    void read();
    void write();
private:
    UserInfo    _user;
    QTcpSocket  _socket;
    IP          _ip;
    Port        _port;
};

#endif // CLIENTCONNECTION_H
