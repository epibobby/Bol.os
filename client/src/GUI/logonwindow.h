#ifndef LOGONWINDOW_H
#define LOGONWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QtNetwork>
#include <QtNetwork/QTcpSocket>

#include "connectionsettings.h"
#include "createcount.h"

namespace Ui {
    class LogonWindow;
}

class LogonWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogonWindow(QWidget *parent = 0);
    ~LogonWindow();

private slots:
    void on_Config_clicked();

    void on_actionCreate_Account_triggered();

    void on_actionExit_triggered();

private:
    Ui::LogonWindow     *ui;
    ConnectionSettings  *_settings;
    CreateCount         *_create;
    QString              _username;
    QString              _password;


    QTcpSocket          *tcpSocket;
    QString             currentFortune;
    quint16             blockSize;
    QNetworkSession     *networkSession;

};

#endif // LOGONWINDOW_H
