#include "createcount.h"
#include "ui_createcount.h"

CreateCount::CreateCount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateCount)
{
    ui->setupUi(this);
    this->setMaximumHeight(300);
    this->setMaximumWidth(400);
    this->setMinimumHeight(300);
    this->setMinimumWidth(400);
}

CreateCount::~CreateCount()
{
    delete ui;
}

QString CreateCount::_checkAll()
{
    if (_username == "")
        return "     username";
    else if (_password == "")
        return "     password";
    else if (_confirm == "")
        return "     confirm";
    else if (_email == "")
        return "       email";
    else if (_birthday == "")
        return "     birthday";
    return "";
}

bool CreateCount::_checkPassword()
{
    Alert alert;
    if (_password.compare(_confirm) == 0 && _password != "") {
        alert.setMessage("     Confirmation is good");
        alert.exec();
        return true;
    }
    alert.setMessage("     Confirmation is bad");
    alert.exec();
    return false;
}

void CreateCount::on_Create_clicked()
{
    Alert alert;
    QString result;
    _username = ui->Username->text();
    _password = ui->Password->text();
    _confirm = ui->ConfirmPassword->text();
    _email = ui->Email->text();
    _birthday = ui->Birthday->text();
    result =_checkAll();
    if (result == "")
        this->hide();
    else {
        alert.setMessage(result + " is missing");
        alert.exec();
    }
    if (_checkPassword() == true)
        this->hide();
}

void CreateCount::on_Reset_clicked()
{
    ui->Username->clear();
    ui->Password->clear();
    ui->ConfirmPassword->clear();
    ui->Email->clear();
    ui->Birthday->clear();
}
