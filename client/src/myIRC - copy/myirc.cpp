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

    QAction *actSetNickname = new QAction("Set Nickname", controller->getOutPutwin());
    connect(actSetNickname, SIGNAL(triggered()), this, SLOT(setNickname()));
    this->mainWindow->getUi()->mainToolBar->addAction(actSetNickname);

}

void MyIRC::setNickname()
{
       popup1 = new QFrame(this, Qt::Tool | Qt::Window | Qt::FramelessWindowHint);
       popup1->resize(150,60);
       tmpE = new QLineEdit( popup1 );
  // connect( tmpE, SIGNAL( textChanged(const QString&)), this, SLOT( setActive() ) );
       tmpE->setGeometry(10,10, 130, 30);
       popup1->show();
       tmpE->setFocus();

       connect( tmpE, SIGNAL( returnPressed() ), this, SLOT( setTheNickName() ) );
}


void MyIRC::setTheNickName()
{

    session->setNickName(tmpE->text());
    popup1->hide();
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
