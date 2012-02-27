#ifndef LOGONWINDOW_H
#define LOGONWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtNetwork/QtNetwork>
#include <QtNetwork/QTcpSocket>

#include "createcount.h"
#include "mainwindow.h"
#include "clientconnection.h"

namespace Ui {
    class LogonWindow;
}

class ClientConnection;
class MainWindow;
class LogonWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogonWindow(QWidget *parent = 0);
    ~LogonWindow();
    void closeEvent(QCloseEvent *);
    void setStatus();

private slots:

    void _init();
    void _initWindow();


    void on_Config_clicked();
    void on_actionCreate_Account_triggered();
    void on_actionExit_triggered();
    void on_Ok_clicked();
    void on_Refresh_clicked();

private:
    Ui::LogonWindow     *ui;
    ClientConnection    *_client;
    MainWindow          *_mainWindow;
    ConnectionSettings  *_serverSettings;
    CreateCount         *_createCount;
    QString              _username;
    QString              _password;
    State                _status;

};

#endif // LOGONWINDOW_H
