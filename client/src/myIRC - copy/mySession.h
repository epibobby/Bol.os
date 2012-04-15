#ifndef SESSION_H
#define SESSION_H

class MyIRC;
#include "myirc.h"
#include "mainwindow.h"

class MySession : public IrcSession
{
    Q_OBJECT
private :
//    QString host;
//    QString userName;
    //    QString NickName;
//    QString realName;
      MyIRC *mainWindow;
//    IrcSession* session;


public :
    MySession(MyIRC *mainWindow = 0);
    ~MySession() {}


public slots :
    void connectToServer();
    void onMessageReceived(IrcMessage*);
    void disConnectFromServer();
    void onConnected();
};

#endif // SESSION_H
