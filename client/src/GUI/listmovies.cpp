#include "listmovies.h"
#include "ui_listmovies.h"
#include <iostream>

ListMovies::ListMovies(ApiMovie *api, QWidget *parent) :
    _api(api),
    QWidget(parent),
    ui(new Ui::ListMovies)
{
    ui->setupUi(this);
}

ListMovies::~ListMovies()
{
    delete ui;
}

void ListMovies::AddListMovies(QList<InfoMovies> list)
{
    _list = list;
    for (int x = 0; x != list.length(); x++) {
        QString tmp = list[x].title;
        new QListWidgetItem(tr(tmp.toStdString().c_str()), ui->listWidget);
    }
}

void ListMovies::on_listWidget_doubleClicked(const QModelIndex&)
{
    for (int x = 0; x != _list.length(); x++)
        if (_list.at(x).title == ui->listWidget->currentItem()->text())
           _api->requestASheet("#" + _list.at(x).id);
}
