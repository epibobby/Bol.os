#ifndef STACKEDWIDGETMOVIENEWS_H
#define STACKEDWIDGETMOVIENEWS_H

#include <QStackedWidget>
#include <QTimer>
#include <QWidget>
#include <QDesktopServices>
#include "listmovies.h"

namespace Ui {
    class StackedWidgetMovieNews;
}

typedef struct
{
    QString summary;
    QString title;
    QString img;
    QString urlVideo;
}Sheet2;

class StackedWidgetMovieNews : public QStackedWidget
{
    Q_OBJECT

public:
    explicit StackedWidgetMovieNews(ApiMovie *api, QWidget *parent = 0);
    ~StackedWidgetMovieNews();

private slots:
    void ChangeMovie();
    void IncomingSheet(QList<QMap<QString, QString> > list);

private:
    ApiMovie *_api;
    Ui::StackedWidgetMovieNews *ui;
    ListMovies *_listMovies;
    QList<QString> *_randomMovies;
    QTimer *_movieTimer;
    int pos;
};

#endif // STACKEDWIDGETMOVIENEWS_H
