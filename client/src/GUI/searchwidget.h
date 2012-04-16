#ifndef SEARCHWIDGET_H
#define SEARCHWIDGET_H

#include <QWidget>
#include <QDesktopServices>
#include "listmovies.h"
#include "../IRC/myirc.h"

namespace Ui {
    class SearchWidget;
}

typedef struct
{
    QString summary;
    QString title;
    QString img;
    QString urlVideo;
}Sheet;
class SearchWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SearchWidget(MyIRC *irc, ApiMovie *api, QWidget *parent = 0);
    ~SearchWidget();
    void UpdateMovie(Sheet sheet);

private slots:
    void on_Search_clicked();
    void IncomingSheet(QList<QMap<QString, QString> > list);

    void on_PlayTrailer_clicked();

    void on_JoinChannel_clicked();

private:
    MyIRC *_irc;
    ApiMovie *_api;
    Ui::SearchWidget *ui;
    ListMovies *_listMovies;
    QString trailer;
};

#endif // SEARCHWIDGET_H
