#include "logonwindow.h"
#include "ui_logonwindow.h"
#include <iostream>

LogonWindow::LogonWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogonWindow), _serverSettings(new ConnectionSettings), _createCount(new CreateCount)
{
    _init();
    _initWindow();
}

LogonWindow::~LogonWindow()
{
    delete ui;
}

void LogonWindow::closeEvent(QCloseEvent *)
{
    //_client->_disconnected();
}

void LogonWindow::_init()
{
    _mainWindow = new MainWindow();
    _client = new ClientConnection(this, _serverSettings);
    QRect resolution = QApplication::desktop()->screenGeometry();
    move((resolution.width()*40)/100, (resolution.height()*20)/100);
}

void LogonWindow::_initWindow()
{
    ui->setupUi(this);
    ui->Ok->setEnabled(false);
    this->setMaximumHeight(471);
    this->setMaximumWidth(380);
    this->setMinimumHeight(471);
    this->setMinimumWidth(380);
}

void LogonWindow::setStatus()
{
    QPixmap pix;
    QImage img;
    if (_client->getStatus() == Online) {
        img.load("../../resources/images/logoOnline.jpg");
        pix.convertFromImage(img);
        ui->Logo->setPixmap(pix);
        ui->Refresh->setEnabled(false);
    }
    else {
        img.load("../../resources/images/logoOffline.jpg");
        pix.convertFromImage(img);
        ui->Logo->setPixmap(pix);
        ui->Refresh->setEnabled(true);
    }
   ui->Ok->setEnabled(true);
}

void LogonWindow::on_Config_clicked()
{
    _serverSettings->exec();
    ui->Refresh->setEnabled(true);
}

void LogonWindow::on_actionCreate_Account_triggered()
{
    _createCount->exec();
}

void LogonWindow::on_actionExit_triggered()
{
    this->close();
}

void LogonWindow::on_Ok_clicked()
{
    _client->setLogin(ui->Username->text());
    _client->writeOnServer(_client->prepareMsg(R_AUTH, &(_client->_user)));
    _mainWindow->setClient(_client);
    _mainWindow->show();
}
void LogonWindow::on_Refresh_clicked()
{
    std::cout << "\nRefresh with host : " << _serverSettings->getHost().toStdString() << " port : " << _serverSettings->getPort().toInt() << std::endl;
    _client->newConnection();
}
