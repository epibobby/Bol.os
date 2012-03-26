#ifndef CREATECOUNT_H
#define CREATECOUNT_H

#include <QDialog>
#include "alert.h"

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
    void on_Create_clicked();

    void on_Reset_clicked();

private:
    QString _checkAll();
    bool    _checkPassword();

    Ui::CreateCount *ui;
    QString _username;
    QString _password;
    QString _confirm;
    QString _email;
    QString _birthday;
};

#endif // CREATECOUNT_H
