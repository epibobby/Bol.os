#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "lmc.h"
#include "clientconnection.h"

class LMC;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     Ui::MainWindow *ui;
     void setClient(ClientConnection*);
private slots:
    void _slotLMC(int);

    void on_ChangeComLeft_clicked();

    void on_ChangeComRight_clicked();

private:
    ClientConnection   *_client;
    LMC                *_LMC;
};

#endif // MAINWINDOW_H
