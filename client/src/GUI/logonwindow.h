#ifndef LOGONWINDOW_H
#define LOGONWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtNetwork/QtNetwork>
#include <QtNetwork/QTcpSocket>

#include "connectionsettings.h"
#include "createcount.h"
#include "mainwindow.h"
#include "clientconnection.h"

namespace Ui {
    class LogonWindow;
}

class LogonWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogonWindow(QWidget *parent = 0);
    ~LogonWindow();
    void closeEvent(QCloseEvent *);

private slots:

    void _init();
    void _initWindow();

    void _initConnection();
    void _newConnection();
    void _connected();
    void _disconnected();

    void _getToken();
    void _send();

    void _checkResponse();

    void _setStatus();
    void _displayError(QAbstractSocket::SocketError socketError);
    void on_Config_clicked();
    void on_actionCreate_Account_triggered();
    void on_actionExit_triggered();
    void on_Ok_clicked();
    void on_Refresh_clicked();

private:
    Ui::LogonWindow     *ui;
    ClientConnection    *_client;
    MainWindow          *_mainWindow;
    ConnectionSettings  *_settings;
    CreateCount         *_createCount;
    QString              _username;
    QString              _password;
    State                _status;


    QNetworkSession     *_networkSession;
    QTcpSocket          *_tcpSocket;
    quint16              _blocksize;
    QString              _currentFortune;
};

#endif // LOGONWINDOW_H
