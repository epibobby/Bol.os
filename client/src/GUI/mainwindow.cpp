#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSignalMapper>
#include <iostream>

const qreal DefaultVolume = -1.0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _LMC = new LMC(this);
    _SWMN = new StackedWidgetMovieNews(this);
    _SWMN->move(30, 360);
    QRect resolution = QApplication::desktop()->screenGeometry();
    move((resolution.width()*15)/100, (resolution.height()*3)/100);
    this->setWindowFlags(Qt::FramelessWindowHint);
    initPlayer();
    QSignalMapper *signalMapper = new QSignalMapper();
    //QSignalMapper *signalMapper2 = new QSignalMapper();
    connect(ui->AddYourLibrary, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->AddYourLibrary, 1);
    connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(_slotLMC(int)));
   // connect(ui->PlayDayMovie, SIGNAL(clicked()), signalMapper2, SLOT(map()));
   // signalMapper2->setMapping(ui->PlayDayMovie, 2);
   // connect(signalMapper2, SIGNAL(mapped(int)), this, SLOT(_slotLMC(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initPlayer()
{
 //   qreal volume = DefaultVolume;
    bool smallScreen = false;
    #ifdef Q_OS_SYMBIAN
        smallScreen = true;
    #endif
    _player = new MediaPlayer();
    _player->move(0,0);
    _player->setMinimumSize(100, 300);
    ui->tabWidget->insertTab(2, _player, "Media Player");
    _player->setSmallScreen(smallScreen);
    if (smallScreen)
       _player->showMaximized();
    else
       _player->show();
    /*if (DefaultVolume != volume)
         player.setVolume(volume);
     if (!fileName.isNull())
         player.setFile(fileName);*/
}

void MainWindow::setClient(ClientConnection *client)
{
    _client = client;
}

/*Faire une classe pour chaque onglet */

void MainWindow::_slotLMC(int id)
{
    std::cout << "id = " << id << std::endl;
    switch (id) {
        case 1 : _LMC->on_AddYourLibrary_clicked(); break;
        case 2 : _LMC->on_PlayDayMovie_clicked(); break;
    }
}

void MainWindow::on_ChangeComLeft_clicked()
{
    //ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ChangeComRight_clicked()
{
    //ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionExit_triggered()
{
    this->hide();
}
