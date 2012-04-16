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
    _api = new ApiMovie();
    _SWMN = new StackedWidgetMovieNews(_api, this);
    MyIRC *myIrc = new MyIRC(ui->IRC);
    _searchWidget = new SearchWidget(ui->tabWidget, myIrc, _api);
    _SWMN->move(30, 360);
    QRect resolution = QApplication::desktop()->screenGeometry();
    move(0,0);
    this->setWindowFlags(Qt::FramelessWindowHint);
    initPlayer();
    QSignalMapper *signalMapper = new QSignalMapper();
    //QSignalMapper *signalMapper2 = new QSignalMapper();
    //connect(ui->AddYourLibrary, SIGNAL(clicked()), signalMapper, SLOT(map()));
    //signalMapper->setMapping(ui->AddYourLibrary, 1);
    //connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(_slotLMC(int)));
   // connect(ui->PlayDayMovie, SIGNAL(clicked()), signalMapper2, SLOT(map()));
   // signalMapper2->setMapping(ui->PlayDayMovie, 2);
   // connect(signalMapper2, SIGNAL(mapped(int)), this, SLOT(_slotLMC(int)));
    connect(_api, SIGNAL(found(QList<QMap<QString, QString> >)), this, SLOT(IncomingSheet(QList<QMap<QString, QString> >)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::IncomingSheet(QList<QMap<QString, QString> > list)
{
    while(!list.isEmpty())
       {
           QMap<QString,QString> map = list.first();
           list.pop_front();
           QMapIterator<QString, QString> i(map);
           while (i.hasNext()) {
               i.next();
               qDebug() << i.key() << ": " << i.value() << endl;
           }
       }
     ui->tabWidget->setCurrentIndex(3);
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
    _library = new Library(ui->tabWidget, _player);
    ui->tabWidget->insertTab(1, _library, "Library");
    ui->tabWidget->insertTab(2, _player, "Media Player");
    ui->tabWidget->insertTab(3, _searchWidget, "Search");
   // ui->tabWidget->
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
    _api->requestASheet("heat");
    std::cout << "id = " << id << std::endl;
    switch (id) {
        case 1 : _LMC->on_AddYourLibrary_clicked(); break;
        case 2 : _LMC->on_PlayDayMovie_clicked(); break;
    }
}

void MainWindow::on_actionExit_triggered()
{
    this->hide();
}

void MainWindow::on_AddYourLibrary_clicked()
{
    _api->requestASheet(ui->SearchMovie->text());
}
