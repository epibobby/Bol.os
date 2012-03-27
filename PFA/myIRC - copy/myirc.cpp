#include "myirc.h"

MyIRC::MyIRC(QObject *mainWindow)
{
    this->mainWindow = static_cast<MainWindow*>(mainWindow); //widget community.
    this->session = new MySession(this);
    this->controller = new MainWindowController(this);

//    model = new ModelIRC();
}

void MyIRC::connectToServer()
{
    if (this->session != NULL)
        this->session->connectToServer();
}

void MyIRC::disconnectFromServer()
{
    this->session->disConnectFromServer();
}

void MyIRC::joinChannel(QString &chan)
{
    //#TODO créer ligne de connection a un chan (/join #chan) et envoyé à userInputHandler::parseInput(chan)
}

void MyIRC::leaveChannel(QString &chan)
{
//#TODO comme join mais l'invers.
}
