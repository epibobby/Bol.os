#include "connectionsettings.h"
#include "ui_connectionsettings.h"

#include <iostream>
ConnectionSettings::ConnectionSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectionSettings)
{
    ui->setupUi(this);
    this->setMaximumHeight(62);
    this->setMaximumWidth(320);
    this->setMinimumHeight(62);
    this->setMinimumWidth(320);
}

ConnectionSettings::~ConnectionSettings()
{
    delete ui;
}

QString ConnectionSettings::getServer() const
{
    return _server;
}
QString ConnectionSettings::getPort() const
{
    return _port;
}
void ConnectionSettings::on_Ok_clicked()
{
    _server = ui->Server->text();
    _port = ui->Port->text();
    if (_server != "" && _port != "")
        this->hide();
}

void ConnectionSettings::on_Reset_clicked()
{
    ui->Port->clear();
    ui->Server->clear();
}
