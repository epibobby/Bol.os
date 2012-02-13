#include <QtCore/QCoreApplication>
#include "server.h"

int main(int argc, char **argv)
{
    QCoreApplication app(argc,argv);

    Server      server;
    return app.exec();
}





//QTimer *timer = new QTimer(this);
//connect(timer, SIGNAL(timeout()), this, SLOT(update()));
//timer->start(1000);
