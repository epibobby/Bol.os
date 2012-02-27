#include "alert.h"
#include "ui_alert.h"

Alert::Alert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Alert)
{
    ui->setupUi(this);
    this->setMaximumHeight(79);
    this->setMaximumWidth(225);
    this->setMinimumHeight(79);
    this->setMinimumWidth(225);
}

Alert::~Alert()
{
    delete ui;
}

void Alert::setMessage(QString msg)
{
    _message = msg;
    ui->Text->setText(_message);
}

void Alert::on_pushButton_clicked()
{
    this->close();
}
