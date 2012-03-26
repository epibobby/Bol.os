#include <QtGui/QApplication>
#include "logonwindow.h"
#include "../API/apimovie.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogonWindow w;
    w.show();

    return a.exec();
}
