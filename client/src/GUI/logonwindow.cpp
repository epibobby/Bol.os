#include "logonwindow.h"
#include "ui_logonwindow.h"

LogonWindow::LogonWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogonWindow), _settings(new ConnectionSettings), _create(new CreateCount)
{
    ui->setupUi(this);
    this->setMaximumHeight(471);
    this->setMaximumWidth(380);
    this->setMinimumHeight(471);
    this->setMinimumWidth(380);

}

LogonWindow::~LogonWindow()
{
    delete ui;
}

void LogonWindow::on_Config_clicked()
{
    _settings->exec();
}

void LogonWindow::on_actionCreate_Account_triggered()
{
    _create->exec();
    //Fenetre creation de compte
}

void LogonWindow::on_actionExit_triggered()
{
    this->close();
}
