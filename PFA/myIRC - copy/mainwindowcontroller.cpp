#include "mainwindowcontroller.h"

MainWindowController::MainWindowController(QObject *o)
{
    //mainwindow onglet community
    mainWindow = static_cast<MyIRC*>(o);
    this->inputHandler = new UserInputHandler(this);
    session = mainWindow->getSession();


    this->myChannels = new QList<Channel>();
    //list users
    QList<QString>* users = new QList<QString>;
    this->activeChan = new Channel(QString("Server"), QString("the topic"), *users);

    //la nav tab, qui contient server,chan et pvs
    navTab = new QTabWidget(this->mainWindow->getMainWindow());
    navTab->setTabsClosable(true);
    QTextEdit *serverTab = new QTextEdit(navTab);
    navTab->addTab(serverTab, "Server");

       //No close Button for this tab.
    QList<QAbstractButton*> allPButtons = navTab->findChildren<QAbstractButton*>();

    for (int ind = 0; ind < allPButtons.size(); ind++) {
        QAbstractButton* item = allPButtons.at(ind);
        if (item->inherits("CloseButton"))
            item->hide(); ; // Default "Close Tab"
    }


    outPutwin = serverTab;
    //la passer a mainwindow pour le resize event
    mainWindow->getMainWindow()->setNavTab(navTab);

    //creation de l'input de l'user
    userInputEditor = new QLineEdit(this->mainWindow->getMainWindow());
    mainWindow->getMainWindow()->setUserInput(userInputEditor);
    connect(userInputEditor, SIGNAL(returnPressed()), this->getInputHandler(), SLOT(parseInput()));
    // le paSSER A LA MAIN WINDOW POUR sLE RESIZE EVENT
    mainWindow->getMainWindow()->setUserInput(userInputEditor);

    connect(navTab , SIGNAL(currentChanged(int)),this,SLOT(onSelectedTab(int)));
    connect(navTab , SIGNAL(tabCloseRequested(int)),this,SLOT(onSelectedTab(int)));
    connect(navTab, SIGNAL(tabCloseRequested(int)), this, SLOT(onCloseTab(int)));
    //connect(navTab, SIGNAL()  void cellClicked ( int row, int column )));
  }

void MainWindowController::onCloseTab(int i)
{
    qDebug() << "toto";
    navTab->removeTab(i);
}

void MainWindowController::setActiveTab(QWidget *theTab)
{
    mainWindow->getController()->getNavTab()->setCurrentWidget(theTab);
}

void MainWindowController::onSelectedTab(int t)
{
    if (getTabAt(t))
    {
        setActiveTab(getTabAt(t));

    }
        //qDebug() << "selected tab  " << t;
}

QTextEdit * MainWindowController::getTabAt(int ind)
{
    if (ind + 1 < navTab->count())
        return NULL;
    else
        return ((QTextEdit *)(navTab->widget(ind)));
}

void MainWindowController::addTabToNavTab(QTabWidget *theTab, const QString &name)
{
    navTab->addTab(theTab,name);

}
