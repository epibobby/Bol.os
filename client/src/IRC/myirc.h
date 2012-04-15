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
class test;
#include "test.h"
#include "userInputHandler.h"
#include "mySession.h"
#include "mainwindowcontroller.h"

class MyIRC : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyIRC(QWidget *mainWindow = 0);
    test *mainWindow;
     QLineEdit *tmpE;
private:
    QFrame* popup1; //fentre du nickname
     //ineEdit du nickname //la vue principale de l'IRC, onglet Community.
    WindowController *controller; //le controleur de la vue pour récupérer les infos et les mettre.
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
     void setNickname();
     void setTheNickName();

     //getters and setters
     WindowController * getController(){return this->controller;}
     void setController (WindowController * mc) {this->controller = mc;}

     MySession * getSession() {return this->session;}
     void setSession(MySession * s){this->session = s;}

     test * getMainWindow(){return this->mainWindow;}
     void setMainWindow(test *m){this->mainWindow = m;}
};

#endif // MYIRC_H
