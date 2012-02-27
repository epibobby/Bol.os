#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "lmc.h"
#include "clientconnection.h"
#include "mediaplayer.h"

class LMC;

namespace Ui {
    class MainWindow;
}

class ClientConnection;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     void setClient(ClientConnection*);
     void initPlayer();
private slots:
    void _slotLMC(int);

    void on_ChangeComLeft_clicked();

    void on_ChangeComRight_clicked();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    ClientConnection   *_client;
    LMC                *_LMC;
    MediaPlayer        *_player;
};

#endif // MAINWINDOW_H
