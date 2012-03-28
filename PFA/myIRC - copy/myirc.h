#ifndef MYIRC_H
#define MYIRC_H

#include <QMainWindow>
#include <QResizeEvent>
#include <QLineEdit>
#include <QDebug>
#include <IrcMessage>
#include <IrcSession>
#include <QTextEdit>
#include <QStringBuilder>
#include <QList>
#include <QAction>

//using namespace Ui;
class MainWindow;
class UserInputHandler;
class MySession;
class MainWindowController;

#include "userInputHandler.h"
#include "mySession.h"
#include "mainwindowcontroller.h"
#include "mainwindow.h"

class MyIRC : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyIRC(QObject *mainWindow = 0);

private:
    MainWindow *mainWindow; //la vue principale de l'IRC, onglet Community.
    MainWindowController *controller; //le controleur de la vue pour récupérer les infos et les mettre.
    MySession *session; //la session IRC, permet la connection et la déconnection.

public:
     void ShowSettings(QWidget *parent);
     void disconnect();
     void ShowJoinChan(QWidget *parent);
     void leaveChan(QWidget *parent);

public slots :
     void connectToServer();               ////
     void disconnectFromServer();          /////
     void joinChannel(QString &chan);      /////A relier aux bouttons de mainWindow.
     void leaveChannel(QString &chan);     /////

     //getters and setters
     MainWindowController * getController(){return this->controller;}
     void setController (MainWindowController * mc) {this->controller = mc;}

     MySession * getSession() {return this->session;}
     void setSession(MySession * s){this->session = s;}

     MainWindow * getMainWindow(){return this->mainWindow;}
     void setMainWindow(MainWindow *m){this->mainWindow = m;}
};

#endif // MYIRC_H
