#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug()<< "constructor";
   // mySession = new MySession(this);
    //MyIRC *myIrc = new MyIRC(this);
//   // mainWindowController = new MainWindowController(myIrc);


//    this->setStyleSheet("QLineEdit { background-color: yellow } QTextEdit { background-color: grey } QToolBar {background-color: red}");

//    myIrc->getController()->setUserInputEditor(new QLineEdit(this));
//    QLineEdit *userInput = myIrc->getController()->getUserInputEditor();
//    userInput->setGeometry(0,(this->height() - 20), this->width(),20);
//    connect(userInput, SIGNAL(returnPressed()), myIrc->getController()->getInputHandler(), SLOT(parseInput()));

//    myIrc->getController()->setNavTab(new QTabWidget(this));
//    QTabWidget *navTab = myIrc->getController()->getNavTab();

//    myIrc->getController()->setOutPutwin(new QTextEdit(navTab));
//    QTextEdit *outPutwin = myIrc->getController()->getOutPutwin();
//    //outPutwin->setGeometry(0, 0, this->width(), this->height() - 20);
//    navTab->addTab(outPutwin, tr("Server"));
//    navTab->isTabEnabled(1);
//    navTab->visibleRegion();

//    QTextEdit *test = new QTextEdit(navTab);
//    //test->setGeometry(0, 0, this->width(), this->height() - 20);
//    navTab->addTab(test, tr("Tab2"));

//    QAction *actConnect = new QAction("connect", outPutwin);
//    connect(actConnect, SIGNAL(triggered()), myIrc, SLOT(connectToServer()));
//    this->ui->mainToolBar->addAction(actConnect);

//    QAction *actDisConnect = new QAction("Disconnect", outPutwin);
//    //connect(actDisConnect, SIGNAL(triggered()), myIrc, SLOT(disConnectFromServer()));
//    this->ui->mainToolBar->addAction(actDisConnect);
}

MainWindow::~MainWindow()
{
    delete ui;
    qDebug()<< "destructor";
}

void MainWindow::resizeEvent(QResizeEvent *event)
{

    //qDebug() << event;
    int w = event->size().width();
    int h = event->size().height();
    //QSize *newSize = new QSize(x - 20, y);
    userInput->setGeometry(0, h - 20, w, 20);
    //outPutwin->setGeometry(0, this->ui->mainToolBar->height(), w, h - 20 - this->ui->mainToolBar->height());
     navTab->setGeometry(0, this->ui->mainToolBar->height(), w, h - 20 - this->ui->mainToolBar->height());
}
