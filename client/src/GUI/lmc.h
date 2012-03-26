#ifndef LMC_H
#define LMC_H

#include "mainwindow.h"

class MainWindow;

namespace Ui {
    class MainWindow;
}

class LMC  :  public QObject
{
public:
    LMC(MainWindow*);
    ~LMC();
public slots:
    void on_AddYourLibrary_clicked();
    void on_PlayDayMovie_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // LMC_H
