#ifndef LMC_H
#define LMC_H

#include "mainwindow.h"

class MainWindow;

class LMC  :  public QObject
{
public:
    LMC(MainWindow*);
    ~LMC();
public slots:
    void on_AddYourLibrary_clicked();
};

#endif // LMC_H
