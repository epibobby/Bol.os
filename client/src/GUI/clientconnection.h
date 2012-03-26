#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H

#include "../../../common/src/Protocole/Protocole.h"
//QCoreApplication::applicationDirPath() + "/image/promo.png"
#include "connectionsettings.h"
#include "logonwindow.h"
#include "protocoleclient.h"
#include <QtNetwork>
#include <QObject>

class LogonWindow;
class ProtocoleClient;
class ClientConnection : public QObject
{
    Q_OBJECT

public:
    ClientConnection(QObject * parent = 0);
    ClientConnection(LogonWindow*, ConnectionSettings*);
    ~ClientConnection();
    void  authOnServer();
    void  writeOnServer(QString);
    void  newConnection();
    State getStatus();
    void  setStatus(State);
    void  setLogin(Login);
    UserInfo    _user;

public slots:
    void readOnServer();
    void _connected();
    void _disconnected();
    QString prepareMsg(RequestType req, UserInfo *user = 0);
    void _displayError(QAbstractSocket::SocketError);

private:
    LogonWindow         *_logonWindow;
    ConnectionSettings  *_serverSettings;
    QTcpSocket          *_tcpSocket;
    QNetworkSession     *_networkSession;
    quint16              _blocksize;
    QString              _currentFortune;
    ProtocoleClient     *_proto;
    IP          _ip;
    Port        _port;
};

#endif // CLIENTCONNECTION_H
