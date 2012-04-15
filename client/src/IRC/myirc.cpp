#include "myirc.h"
#include <QMessageBox>
 #include <QPushButton>

MyIRC::MyIRC(QWidget *mainWindow)
{
    this->mainWindow = static_cast<test*>(mainWindow); //widget community.
    this->session = new MySession(this);
    this->controller = new WindowController(this);


    QPushButton *actConnect = new QPushButton("connect", mainWindow);
    connect(actConnect, SIGNAL(clicked()), this, SLOT(connectToServer()));
    actConnect->move(760, 0);
    //this->mainWindow->getUi()->mainToolBar->addAction(actConnect);

    QPushButton *actDisConnect = new QPushButton("Disconnect", mainWindow);
    connect(actDisConnect, SIGNAL(clicked()), this, SLOT(disconnectFromServer()));
    //this->mainWindow->getUi()->mainToolBar->addAction(actDisConnect);
    actDisConnect->move(834, 0);

    QPushButton *actSetNickname = new QPushButton("Set Nickname", mainWindow);
    connect(actSetNickname, SIGNAL(clicked()), this, SLOT(setNickname()));
    actSetNickname->move(930, 0);
    //this->mainWindow->getUi()->mainToolBar->addAction(actSetNickname);
}

void MyIRC::setNickname()
{
       popup1 = new QFrame(this, Qt::Tool | Qt::Window | Qt::FramelessWindowHint);
       popup1->setFrameStyle(QFrame::Box);
       popup1->resize(150,60);
       popup1->move(1577, 118);
       tmpE = new QLineEdit( popup1 );
  // connect( tmpE, SIGNAL( textChanged(const QString&)), this, SLOT( setActive() ) );
       tmpE->setGeometry(10,15, 130, 30);
       popup1->show();
       popup1->setFocus();
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
    if (session->nickName() == NULL)
    {
        QMessageBox *errMsg = new QMessageBox(this);
        errMsg->setText("You must specify a nickname first.");
        errMsg->show();
    }
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
