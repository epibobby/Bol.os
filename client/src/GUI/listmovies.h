#ifndef LISTMOVIES_H
#define LISTMOVIES_H

#include <QWidget>
#include <QListWidget>
#include <QList>
#include "../API/apimovie.h"

namespace Ui {
    class ListMovies;
}

typedef struct
{
    QString id;
    QString title;
}InfoMovies;

class ListMovies : public QWidget
{
    Q_OBJECT

public:
    explicit ListMovies(ApiMovie *api, QWidget *parent = 0);
    void AddListMovies(QList<InfoMovies> list);
    ~ListMovies();
private slots:
    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    ApiMovie *_api;
    Ui::ListMovies *ui;
    QList<InfoMovies> _list;
};

#endif // LISTMOVIES_H
