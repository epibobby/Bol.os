#ifndef SEARCHWIDGET_H
#define SEARCHWIDGET_H

#include <QWidget>
#include "listmovies.h"

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
    explicit SearchWidget(ApiMovie *api, QWidget *parent = 0);
    ~SearchWidget();
    void UpdateMovie(Sheet sheet);

private slots:
    void on_Search_clicked();
    void IncomingSheet(QList<QMap<QString, QString> > list);

private:
    ApiMovie *_api;
    Ui::SearchWidget *ui;
    ListMovies *_listMovies;

};

#endif // SEARCHWIDGET_H
