#include "test.h"

test::test(QWidget *parent) :
    QWidget(parent)
{

}

test::~test()
{
}

void test::resizeEvent(QResizeEvent *event)
{

    int w = event->size().width();
    int h = event->size().height();
   // QSize *newSize = new QSize(x - 20, y);
    userInput->setGeometry(0, h - 20, w, 20);
    //outPutwin->setGeometry(0, this->ui->mainToolBar->height(), w, h - 20 - this->ui->mainToolBar->height());
    //navTab->setGeometry(0, this->ui->mainToolBar->height(), w, h - 20 - this->ui->mainToolBar->height());
}

