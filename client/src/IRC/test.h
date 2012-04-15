#ifndef TEST_H
#define TEST_H
#include "myirc.h"

class test : public QWidget
{
    Q_OBJECT
public:
    test(QWidget *parent = 0);
    ~test();

private:
    QLineEdit *userInput;
    QTabWidget *navTab;
    void resizeEvent(QResizeEvent *);
public :
    void setNavTab(QTabWidget *navtab){ this->navTab = navtab;}
    QTabWidget * getNavTab(){return this->navTab;}

    void setUserInput(QLineEdit * userinput){this->userInput = userinput;}
    QLineEdit * getUserInput(){return this->userInput;}
};

#endif // TEST_H
