#include "logonwindow.h"
#include "ui_logonwindow.h"
#include <iostream>

LogonWindow::LogonWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogonWindow), _settings(new ConnectionSettings), _createCount(new CreateCount)
{
    ui->setupUi(this);
    ui->Ok->setEnabled(false);
    this->setMaximumHeight(471);
    this->setMaximumWidth(380);
    this->setMinimumHeight(471);
    this->setMinimumWidth(380);
    _status = OFFLINE;
    _initConnection();
}

LogonWindow::~LogonWindow()
{
    delete ui;
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
    //_newFortune();
}

void LogonWindow::_initConnection()
{
    _networkSession = 0;
    _tcpSocket = new QTcpSocket(this);
    QObject::connect(_tcpSocket, SIGNAL(readyRead()), this, SLOT(_readFortune()));
    QObject::connect(_tcpSocket, SIGNAL(connected()), this, SLOT(_connected()));
    //QObject::connect(_tcpSocket, SIGNAL(connectionClosed()), this, SLOT(_disconnected()));
    QObject::connect(_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(_displayError(QAbstractSocket::SocketError)));
}

void LogonWindow::_newFortune()
{
    std::cout << "New fortune with " << _settings->getHost().toStdString() << " " << _settings->getPort().toInt() << std::endl;
     _blocksize = 0;
    _tcpSocket->abort();
    _tcpSocket->connectToHost(_settings->getHost(), _settings->getPort().toInt());
}

void LogonWindow::_readFortune()
{
    std::cout << "Read Fortune" << std::endl;
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
        QTimer::singleShot(0, this, SLOT(_newFortune()));
        return;
    }
    _currentFortune = nextFortune;
    std::cout << "Received : " << _currentFortune.toStdString() << std::endl;
    // CREATION FENETRE PRINCIPALE
}

void LogonWindow::_setStatus()
{
    QPixmap pix;
    QImage img;
    std::cout << "setStatus"<< std::endl;
    if (_status == ONLINE) {
        img.load("../../resources/images/logoOnline.jpg");
        pix.convertFromImage(img);
        ui->Logo->setPixmap(pix);
    }
    else {
        img.load("../../resources/images/logoOffline.jpg");
        pix.convertFromImage(img);
        ui->Logo->setPixmap(pix);
    }
   ui->Ok->setEnabled(true);
}

void LogonWindow::_connected()
{
    _status = ONLINE;
    _setStatus();
    std::cout << "You are connected to the server " << _settings->getHost().toStdString() << std::endl;
}

void LogonWindow::_disconnected()
{
    std::cout << "You are disconnected from the server " << _settings->getHost().toStdString() << std::endl;
}

void LogonWindow::_displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        _status = OFFLINE;
        std::cout << "The host was not found. Please check the host name and port settings." << std::endl;
        break;
    case QAbstractSocket::ConnectionRefusedError:
        _status = OFFLINE;
        std::cout << "The connection was refused by the peer. Make sure the fortune server is running, and check that the host name and port settings are correct." << std::endl;
        break;
    default:
        _status = OFFLINE;
        std::cout << "The following error occurred: %1." << _tcpSocket->errorString().toStdString() << std::endl;
    }
    _setStatus();
}

void LogonWindow::on_Refresh_clicked()
{
    std::cout << "Refresh with host : " << _settings->getHost().toStdString() << " port : " << _settings->getPort().toInt() << std::endl;
    _newFortune();
}
