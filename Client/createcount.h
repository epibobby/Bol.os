#ifndef CREATECOUNT_H
#define CREATECOUNT_H

#include <QDialog>
#include <string>
#include <iostream>

namespace Ui {
    class CreateCount;
}

class CreateCount : public QDialog
{
    Q_OBJECT

public:
    explicit CreateCount(QWidget *parent = 0);
    ~CreateCount();

private slots:
    void on_pushButton_clicked();
    void CheckPassword();

private:
    Ui::CreateCount *ui;
    std::string Username;
    std::string Password;
    std::string Confirm;
    std::string Email;
    std::string Birthday;
};

#endif // CREATECOUNT_H
