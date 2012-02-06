#ifndef LOGONWINDOW_H
#define LOGONWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtNetwork/QtNetwork>
#include <QtNetwork/QTcpSocket>

#include "connectionsettings.h"
#include "createcount.h"

namespace Ui {
    class LogonWindow;
}

enum State {
    ONLINE,
    OFFLINE
};

class LogonWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogonWindow(QWidget *parent = 0);
    ~LogonWindow();

private slots:
    void _initConnection();
    void _newFortune();
    void _readFortune();
    void _connected();
    void _setStatus();
    void _disconnected();
    void _displayError(QAbstractSocket::SocketError socketError);

    void on_Config_clicked();
    void on_actionCreate_Account_triggered();
    void on_actionExit_triggered();
    void on_Ok_clicked();

    void on_Refresh_clicked();

private:

    Ui::LogonWindow     *ui;
    ConnectionSettings  *_settings;
    CreateCount         *_createCount;
    QString              _username;
    QString              _password;
    State                 _status;


    QNetworkSession     *_networkSession;
    QTcpSocket          *_tcpSocket;
    quint16              _blocksize;
    QString              _currentFortune;
};

#endif // LOGONWINDOW_H
