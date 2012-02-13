#include "logonwindow.h"
#include "ui_logonwindow.h"
#include <iostream>

LogonWindow::LogonWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogonWindow), _settings(new ConnectionSettings), _createCount(new CreateCount)
{
    _init();
    _initWindow();
    _initConnection();
}

LogonWindow::~LogonWindow()
{
    delete ui;
}

void LogonWindow::closeEvent(QCloseEvent *)
{
    _disconnected();
}

void LogonWindow::_init()
{
    _status = Offline;
    _mainWindow = new MainWindow();
}

void LogonWindow::_initWindow()
{
    ui->setupUi(this);
    ui->Ok->setEnabled(false);
    this->setMaximumHeight(471);
    this->setMaximumWidth(380);
    this->setMinimumHeight(471);
    this->setMinimumWidth(380);
}

void LogonWindow::_initConnection()
{
    _networkSession = 0;
    _tcpSocket = new QTcpSocket(this);
    QObject::connect(_tcpSocket, SIGNAL(readyRead()), this, SLOT(_getToken()));
    QObject::connect(_tcpSocket, SIGNAL(connected()), this, SLOT(_connected()));
    QObject::connect(_tcpSocket, SIGNAL(disconnected()), this, SLOT(_disconnected()));
    QObject::connect(_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(_displayError(QAbstractSocket::SocketError)));
}

void LogonWindow::_newConnection()
{
    std::cout << "New fortune with " << _settings->getHost().toStdString() << " " << _settings->getPort().toInt() << std::endl;
     _blocksize = 0;
    _tcpSocket->abort();
    _tcpSocket->connectToHost(_settings->getHost(), _settings->getPort().toInt());
}

void LogonWindow::_getToken()
{
    std::cout << "Read" << std::endl;
    QDataStream in(_tcpSocket);
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
        QTimer::singleShot(0, this, SLOT(_newConnection()));
        return;
    }
    _currentFortune = nextFortune;
    std::cout << "Received : " << _currentFortune.toStdString() << std::endl;
    _checkResponse();
    //setter le token client connection
}

void LogonWindow::_send()
{
    /*Mise en place du message a envoyer*/
}

void LogonWindow::_checkResponse()
{
    /*Mise en place du protocole de reception check _currentFortune*/
}

void LogonWindow::_setStatus()
{
    QPixmap pix;
    QImage img;
    if (_status == Online) {
        img.load("../../resources/images/logoOnline.jpg");
        pix.convertFromImage(img);
        ui->Logo->setPixmap(pix);
        ui->Refresh->setEnabled(false);
    }
    else {
        img.load("../../resources/images/logoOffline.jpg");
        pix.convertFromImage(img);
        ui->Logo->setPixmap(pix);
        ui->Refresh->setEnabled(true);
    }
   ui->Ok->setEnabled(true);
}

void LogonWindow::_connected()
{
    _status = Online;
    _setStatus();
    std::cout << "You are connected to the server " << _settings->getHost().toStdString() << std::endl;
}

void LogonWindow::_disconnected()
{
    _status = Offline;
    _tcpSocket->close();
    _setStatus();
    std::cout << "You are disconnected from the server " << _settings->getHost().toStdString() << std::endl;
}

void LogonWindow::_displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        _status = Offline;
        std::cout << "The host was not found. Please check the host name and port settings." << std::endl;
        break;
    case QAbstractSocket::ConnectionRefusedError:
        _status = Online;
        std::cout << "The connection was refused by the peer. Make sure the fortune server is running, and check that the host name and port settings are correct." << std::endl;
        break;
    default:
        _status = Offline;
        std::cout << "The following error occurred: %1." << _tcpSocket->errorString().toStdString() << std::endl;
    }
    _setStatus();
}

void LogonWindow::on_Config_clicked()
{
    _settings->exec();
}

void LogonWindow::on_actionCreate_Account_triggered()
{
    _createCount->exec();
}

void LogonWindow::on_actionExit_triggered()
{
    this->close();
}

void LogonWindow::on_Ok_clicked()
{
    _client = new ClientConnection("", "", 0, (State)0, 0);
    _mainWindow->setClient(_client);
    _mainWindow->show();
}
void LogonWindow::on_Refresh_clicked()
{
    std::cout << "\n Refresh with host : " << _settings->getHost().toStdString() << " port : " << _settings->getPort().toInt() << std::endl;
    _newConnection();
}
