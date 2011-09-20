#include "createcount.h"
#include "ui_createcount.h"

CreateCount::CreateCount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateCount)
{
    ui->setupUi(this);
}

CreateCount::~CreateCount()
{
    delete ui;
}

void CreateCount::on_pushButton_clicked()
{
    this->Username = this->ui->Username->text().toStdString();
    this->Password = this->ui->Password->text().toStdString();
    this->Confirm = this->ui->ConfirmPassword->text().toStdString();
    this->Email = this->ui->Email->text().toStdString();
    this->Birthday = this->ui->ConfirmPassword->text().toStdString();
    CheckPassword();
}

void CreateCount::CheckPassword()
{
    std::cout << this->Password << std::endl;
    std::cout << this->Confirm << std::endl;
    if (this->Password.compare(this->Confirm) == 0)
        std::cout << "PASS IS GOOD" << std::endl;
    else
        std::cout << "PASS IS BAD" << std::endl;
}
