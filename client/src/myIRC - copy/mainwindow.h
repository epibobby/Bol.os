#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include <QLineEdit>
#include <QDebug>
#include <QTextEdit>

namespace Ui {
class MainWindow;
}

class MainWindowController;
#include "mainwindowcontroller.h"


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

    Ui::MainWindow* getUi() {return this->ui;}
};

#endif // MAINWINDOW_H
