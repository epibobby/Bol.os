#include "mySession.h"
#include <QStringBuilder>

MySession::MySession(MyIRC *parent) : IrcSession(parent)
{
    mainWindow = parent;
    connect(this, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(this, SIGNAL(messageReceived(IrcMessage*)), this, SLOT(onMessageReceived(IrcMessage*)));
}

void MySession::onConnected()
{
    //this->sendCommand(IrcCommand::createJoin(tr("#toto")));
}

void MySession::connectToServer()
{
    qDebug() << "in the session connect";
    this->setHost("irc.2600.net");
    this->setUserName("a2pis");
    this->setNickName("sip2anotuom");
    this->setRealName("notuom");
    this->open();
}

void MySession::onMessageReceived(IrcMessage*toto)
{
    QTextEdit *t = this->mainWindow->getController()->getTabAt(0);//mainWindow->getController()->getTabAt(0); //fenetre server
    //#TODO PARSE MSG RECVD TO GET TARGET. CALL CONTROLLER::FIND TARGET IN CHANNELS methode
    if (t)
        t->append(toto->toString());
    else
        qDebug() << "mySession.cpp onMessageReceived index out of bond.";
}

void MySession::disConnectFromServer()
{
    this->close();
    mainWindow->getController()->getOutPutwin()->append("Disconnected from server.");
}
