#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include <QLineEdit>
#include <QDebug>
#include <QTextEdit>
class MainWindowController;
#include "mainwindowcontroller.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MainWindowController *mainWindowController;
    
private:
    Ui::MainWindow *ui;
    QLineEdit *userInput;
    QTabWidget *navTab;
    void resizeEvent(QResizeEvent *);
public :
    void setNavTab(QTabWidget *navtab){ this->navTab = navtab;}
    QTabWidget * getNavTab(){return this->navTab;}

    void setUserInput(QLineEdit * userinput){this->userInput = userinput;}
    QLineEdit * getUserInput(){return this->userInput;}

};

#endif // MAINWINDOW_H
