#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MyIRC *myIrc = new MyIRC(this);

    //stylesheet pour coloration
    this->setStyleSheet("QLineEdit { background-color: yellow } QTextEdit { background-color: grey } QToolBar {background-color: red}");

    navTab = myIrc->getController()->getNavTab();


    QAction *actConnect = new QAction("connect", myIrc->getController()->getOutPutwin());
    connect(actConnect, SIGNAL(triggered()), myIrc, SLOT(connectToServer()));
    this->ui->mainToolBar->addAction(actConnect);

    QAction *actDisConnect = new QAction("Disconnect", myIrc->getController()->getOutPutwin());
    connect(actDisConnect, SIGNAL(triggered()), myIrc, SLOT(disconnectFromServer()));
    this->ui->mainToolBar->addAction(actDisConnect);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{

    int w = event->size().width();
    int h = event->size().height();
   // QSize *newSize = new QSize(x - 20, y);
    userInput->setGeometry(0, h - 20, w, 20);
    //outPutwin->setGeometry(0, this->ui->mainToolBar->height(), w, h - 20 - this->ui->mainToolBar->height());
    navTab->setGeometry(0, this->ui->mainToolBar->height(), w, h - 20 - this->ui->mainToolBar->height());
}
