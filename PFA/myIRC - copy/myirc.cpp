#include "myirc.h"

MyIRC::MyIRC(QObject *mainWindow)
{
    this->mainWindow = static_cast<MainWindow*>(mainWindow); //widget community.
    this->session = new MySession(this);
    this->controller = new MainWindowController(this);


    QAction *actConnect = new QAction("connect", controller->getOutPutwin());
    connect(actConnect, SIGNAL(triggered()), this, SLOT(connectToServer()));
    this->mainWindow->getUi()->mainToolBar->addAction(actConnect);

    QAction *actDisConnect = new QAction("Disconnect", controller->getOutPutwin());
    connect(actDisConnect, SIGNAL(triggered()), this, SLOT(disconnectFromServer()));
    this->mainWindow->getUi()->mainToolBar->addAction(actDisConnect);
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
