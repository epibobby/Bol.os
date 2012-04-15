#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "lmc.h"
#include "clientconnection.h"
#include "mediaplayer.h"
#include "stackedwidgetmovienews.h"
#include "searchwidget.h"
#include "library.h"
#include "../IRC/myirc.h"

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

    void on_actionExit_triggered();

    void IncomingSheet(QList<QMap<QString, QString> >);

private:
    Ui::MainWindow          *ui;
    ClientConnection        *_client;
    LMC                     *_LMC;
    MediaPlayer             *_player;
    StackedWidgetMovieNews  *_SWMN;
    ApiMovie                *_api;
    SearchWidget            *_searchWidget;
    Library                 *_library;
};

#endif // MAINWINDOW_H
