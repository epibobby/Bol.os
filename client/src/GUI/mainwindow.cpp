#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSignalMapper>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _LMC = new LMC(this);
    QSignalMapper *signalMapper = new QSignalMapper();
    connect(ui->AddYourLibrary, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->AddYourLibrary, 1);
    connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(_slotLMC(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setClient(ClientConnection *client)
{
    _client = client;
}

/*Faire une classe pour chaque onglet */

void MainWindow::_slotLMC(int id)
{
    switch (id) {
        case 1 : _LMC->on_AddYourLibrary_clicked();
    }
}

void MainWindow::on_ChangeComLeft_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ChangeComRight_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
