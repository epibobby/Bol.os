#ifndef MAINWINDOWCONTROLLER_H
#define MAINWINDOWCONTROLLER_H

class MyIRC;

#include <QAbstractButton>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "myirc.h"
#include "channel.h"

class MainWindowController : public QMainWindow
{
    Q_OBJECT
private:
    MyIRC *mainWindow; //fentre principale de l'IRC (widget Community)
    QTabWidget * navTab; //widget avec les tab, correspondant a server + chan + pvs
    QLineEdit *userInputEditor; // ligne d'edition de text, input de l'utilisateur.
    QTextEdit * outPutwin;// l'une des tab de  navTab.
    QWidget *settingsView; //vue des settings dans mainWindow, pour récup les infos pour la création de la session

    MySession *session; // la session IRC.
    QList<Channel> *myChannels; //liste des channels auxquels l'utilisateurs est connecté.
    QList<QString> *myPvs; //liste des utilisateurs auxquels l'utilisateur parle en privé.

    UserInputHandler *inputHandler; //la gestion des input de l'utilisateur (parsing des commandes IRC).

    Channel *activeChan;

public slots :
    void onSelectedTab(int);
    void onCloseTab(int);

public:
     MainWindowController(QObject *o);
    void setActiveTabIndex(int tab);
    void setActiveTab(QWidget *theTab);
    QTextEdit * getTabAt(int );
   // QTextEdit * getTabWithName
    //QWidget getActiveTab();
   //#TODO void addToChannels(const QString &c);
   //#TODO void removeFromChannels(Channel &c) {this->myChannels->removeOne(c);}

    void addTabToNavTab(QTabWidget *theTab, const QString &name);

    void setSession(MySession *session){this->session = session;}
    MySession * getSession(){return this->session;}

    void setOutPutwin(QTextEdit *e){this->outPutwin = e;}
    QTextEdit * getOutPutwin(){return this->outPutwin;}

    void setNavTab(QTabWidget* navtab){this->navTab = navtab;}
    QTabWidget * getNavTab(){return this->navTab;}

    void setUserInputEditor(QLineEdit * q){this->userInputEditor = q;}
    QLineEdit * getUserInputEditor(){return this->userInputEditor;}

    Channel * getActiveChan() {return activeChan;}
    void setActiveChan(QString ac) {this->activeChan->setName(ac);}

    void setMyChannels(QList<Channel> * myChannel) {this->myChannels = myChannel;}
    QList<Channel> * getMyChannels(){return this->myChannels;}

    void setMyPvs(QList<QString> * myPvs){this->myPvs = myPvs;}
    QList<QString> * getMyPvs(){ return this->myPvs;}

    UserInputHandler * getInputHandler(){return this->inputHandler;}
    void setInputHandler(UserInputHandler * inputHandler){this->inputHandler = inputHandler;}

    MyIRC * getMyIrc() {return this->mainWindow;}
    void setMyIrc(MyIRC * toto){this->mainWindow = toto;}
};

#endif // MAINWINDOWCONTROLLER_H
