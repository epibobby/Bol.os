#include <QtCore/QCoreApplication>
#include "apimovie.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ApiMovie api;
    QStringList listMovie;

    qDebug() << "main";
    listMovie = api.loadLibrary("C:\\Users\\bertuc_k\\Downloads");
    foreach (QString movie, listMovie)
    {
        qDebug() << movie;
    }
    //api.requestASheet("Edward", true);
    return a.exec();
}
