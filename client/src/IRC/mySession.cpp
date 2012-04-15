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
    QList<QString>* users = new QList<QString>;
    mainWindow->getController()->getMyChannels()->append(Channel(tr("#BolosLMC"), tr("Le chan du logiciel qui roxx sa mère."), *users));
    QTextEdit *theChanTab = new QTextEdit(mainWindow->getController()->getNavTab());
    mainWindow->getController()->setActiveChan(tr("#BolosLMC"));
    mainWindow->getController()->addTabToNavTab(theChanTab,tr("#BolosLMC"));
    mainWindow->getController()->getNavTab()->setCurrentWidget(theChanTab);

    this->sendCommand(IrcCommand::createJoin(tr("#BolosLMC")));

}

void MySession::connectToServer()
{
    this->setHost("irc.2600.net");
    this->setUserName("BolosUser");
    //this->setNickName(NickName); //setted in MyIRC::setNickname()
    this->setRealName("UserBolos");
    this->open();
}

void MySession::onMessageReceived(IrcMessage*toto)
{
    QTextEdit *t = this->mainWindow->getController()->getTabAt(0);//mainWindow->getController()->getTabAt(0); //fenetre server
 //   qDebug() << this->mainWindow->getController()->getNavTab()->count();

    //#TODO PARSE MSG RECVD TO GET TARGET. CALL CONTROLLER::FIND TARGET IN CHANNELS methode
   // if (t)
  //      t->append(toto->toString());
  //  else
  //      qDebug() << "mySession.cpp onMessageReceived index out of bond.";

    switch (toto->type())
    {
    case IrcMessage::Private:
        handlePrivateMessage(static_cast<IrcPrivateMessage*>(toto));
        break;
    default:
        t->append(toto->toString());
        break;
    }
}

void MySession::handlePrivateMessage(IrcPrivateMessage *msg)
{
     QTabWidget *navTab = this->mainWindow->getController()->getNavTab();

    for (int i = 1; i < navTab->count(); ++i)
    {

        if (!msg->target().compare(navTab->tabText(i)))
            this->mainWindow->getController()->getTabAt(i)->append(msg->sender().name()+ "    >" + msg->message());
    }
}

void MySession::disConnectFromServer()
{
    this->close();
    mainWindow->getController()->getOutPutwin()->append("Disconnected from server.");
}
