#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "test.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    test *toto = new test();
    MyIRC *myIrc = new MyIRC(toto);
    toto->show();

    //stylesheet pour coloration
   // this->setStyleSheet("QLineEdit { background-color: yellow }  QToolBar {background-color: red}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{

//    int w = event->size().width();
//    int h = event->size().height();
//   // QSize *newSize = new QSize(x - 20, y);
//    userInput->setGeometry(0, h - 20, w, 20);
    //outPutwin->setGeometry(0, this->ui->mainToolBar->height(), w, h - 20 - this->ui->mainToolBar->height());
   // navTab->setGeometry(0, this->ui->mainToolBar->height(), w, h - 20 - this->ui->mainToolBar->height());
}
