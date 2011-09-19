#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>
#include "createcount.h"
#include "mainwindow.h"

namespace Ui {
    class FirstWindow;
    class CreateCount;
}

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = 0);
    ~FirstWindow();

private slots:

    void on_pushButton_Ok_clicked();

    void on_pushButton_Cancel_clicked();

    void on_pushButton_Create_clicked();

private:
    Ui::FirstWindow *ui;
    std::string Username;
    std::string Password;
};

#endif // FIRSTWINDOW_H
