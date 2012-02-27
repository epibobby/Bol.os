#include "myGLWidget.h"
#include <iostream>
myGLWidget::myGLWidget(int framesPerSecond, QWidget *parent, char *name)
    : QGLWidget(parent)
{
    setWindowTitle(QString::fromUtf8(name));
    std::cout << "Height Parent Test=" << parent->height() << std::endl;
    //move(820, 1000);
    hide();
    resize(250, 60);
    if(framesPerSecond == 0)
        t_Timer = NULL;
    else
    {
        int seconde = 1000; // 1 seconde = 1000 ms
        int timerInterval = seconde / framesPerSecond;
        t_Timer = new QTimer(this);
        connect(t_Timer, SIGNAL(timeout()), this, SLOT(timeOutSlot()));
        t_Timer->start( timerInterval );
    }
}

void myGLWidget::keyPressEvent(QKeyEvent *keyEvent)
{
    std::cout << "EVENT GL" << std::endl;
    switch(keyEvent->key())
    {
        case Qt::Key_Escape:
            close();
            break;
    }
}

void myGLWidget::setSize(int width, int height)
{
    std::cout << "HEIGHT" << height << std::endl;
    std::cout << "WIDTH" << width << std::endl;
    if (height > 500 && width > 500) {
        move((width/2) -(this->width()/2), ((height*92)/100));
        show();
    }
    else
        hide();
}

void myGLWidget::timeOutSlot()
{
}
