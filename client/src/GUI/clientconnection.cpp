#include "clientconnection.h"
#include <iostream>
#include <sstream>

ClientConnection::ClientConnection(LogonWindow *logon, ConnectionSettings *serverSetting) : _logonWindow(logon), _serverSettings(serverSetting)
{
    _networkSession = 0;
    _tcpSocket = new QTcpSocket(this);
    _user.state = Offline;
    _proto= new ProtocoleClient(this);
    connect(_tcpSocket, SIGNAL(readyRead()), this, SLOT(readOnServer()));
    connect(_tcpSocket, SIGNAL(connected()), this, SLOT(_connected()));
    connect(_tcpSocket, SIGNAL(disconnected()), this, SLOT(_disconnected()));
    connect(_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(_displayError(QAbstractSocket::SocketError)));
}

ClientConnection::ClientConnection(QObject * parent) : QObject(parent)
{
}

ClientConnection::~ClientConnection()
{
}

void ClientConnection::newConnection()
{
    std::cout << "New connection with " << _serverSettings->getHost().toStdString() << " " << _serverSettings->getPort().toInt() << std::endl;
    _blocksize = 0;
    _tcpSocket->abort();
    _tcpSocket->connectToHost(_serverSettings->getHost(), _serverSettings->getPort().toInt());
}

void ClientConnection::authOnServer()
{
}

void ClientConnection::readOnServer()
{
    _currentFortune.clear();
    _blocksize = 0;
    std::cout << "ReadOnServer" << std::endl;
    QDataStream in(_tcpSocket);
    std::cout << "Read Byte available : " << _tcpSocket->bytesAvailable() << std::endl;
    in.setVersion(QDataStream::Qt_4_0);
    if (_blocksize == 0) {
        if (_tcpSocket->bytesAvailable() < (int)sizeof(quint16))
            return;
        in >> _blocksize;
    }
   if (_tcpSocket->bytesAvailable() < _blocksize)
        return;
    QString nextFortune;
    in >> nextFortune;

   if (nextFortune == _currentFortune) {
        QTimer::singleShot(0, this, SLOT(newConnection()));
        return;
    }
    _currentFortune = nextFortune;
    std::cout << "ReadOnServer Received : " << _currentFortune.toStdString() << std::endl;
    RequestType header;
    UserInfo *userInfo = NULL;
    header = (RequestType)_currentFortune.toStdString().c_str()[0];
    if (_currentFortune.size() > sizeof(RequestType)) {
          memcpy(userInfo, _currentFortune.data()+sizeof(RequestType), sizeof(UserInfo));
          //std::cout << "Token=" << userInfo->token << std::endl;
    }

    std::cout << "Header=" << header << std::endl;
    _proto->callMethod(header, *userInfo);
  //      _user = userInfo;
    //parseur ptr func
    //setter le token client connection
}

void ClientConnection::writeOnServer(QString buff)
{
    buff = "coucou";
    QByteArray sock;
    QDataStream out(&sock, QIODevice::WriteOnly);
    //out << (quint16) 0;
    out << buff;
    //out.device()->seek(0);
    //out << (quint16) (sock.size() - sizeof(quint16));
    std::cout << "WriteOnServer: " << buff.toStdString() << std::endl;
    _tcpSocket->write(sock);
}

QString ClientConnection::prepareMsg(RequestType req, UserInfo *user)
{
   std::cout << "Write Server Login = " << user->login.toStdString() << std::endl;
   QString buff;
   char tmp1[512];
   char tmp2[512];
   memcpy(tmp1, &req, sizeof(RequestType));
   if (user != NULL) {
        memcpy(tmp2, user, sizeof(UserInfo));
        buff.append(strcat(tmp1, tmp2));
   }
   else
      buff.append(tmp1);
   return buff;
}

void ClientConnection::_connected()
{
    _user.state = Online;
    _logonWindow->setStatus();
    std::cout << "You are connected to the server " << _serverSettings->getHost().toStdString() << std::endl;
}

void ClientConnection::_disconnected()
{
    _user.state = Offline;
    _tcpSocket->close();
    _logonWindow->setStatus();
    std::cout << "You are disconnected from the server " << _serverSettings->getHost().toStdString() << std::endl;
}

void ClientConnection::_displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        _user.state = Offline;
        std::cout << "The host was not found. Please check the host name and port settings." << std::endl;
        break;
    case QAbstractSocket::ConnectionRefusedError:
        _user.state = Offline;
        std::cout << "The connection was refused by the peer. Make sure the fortune server is running, and check that the host name and port settings are correct." << std::endl;
        break;
    default:
        _user.state = Offline;
        std::cout << "The following error occurred: %1." << _tcpSocket->errorString().toStdString() << std::endl;
    }
    _logonWindow->setStatus();
}

State ClientConnection::getStatus()
{
    return _user.state;
}

void ClientConnection::setStatus(State state)
{
   _user.state = state;
}

void ClientConnection::setLogin(Login login)
{
   _user.login = login;
}
