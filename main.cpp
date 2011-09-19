#include <QtGui/QApplication>
#include "firstwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstWindow w;
    w.show();

    return a.exec();
}
