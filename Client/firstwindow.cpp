#include "firstwindow.h"
#include "ui_firstwindow.h"
#include <string>
#include <iostream>

FirstWindow::FirstWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
}

FirstWindow::~FirstWindow()
{
    delete ui;
}

void FirstWindow::on_pushButton_Ok_clicked()
{
    std::cout << "USER :" << this->ui->Username->text().toStdString() << std::endl;
    std::cout << "PASS :" << this->ui->Password->text().toStdString() << std::endl;
    this->Username = this->ui->Username->text().toStdString();
    this->Password = this->ui->Password->text().toStdString();
    this->hide();
    mainwindow MainView;
    MainView.exec();
}


void FirstWindow::on_pushButton_Cancel_clicked()
{
    this->ui->Username->clear();
    this->ui->Password->clear();
}

void FirstWindow::on_pushButton_Create_clicked()
{
    CreateCount Create;
    Create.exec();
}
