#include <QtGui/QApplication>
#include "mediaplayer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MediaPlayer w;
    w.show();

    return a.exec();
}
