#ifndef LIBRARY_H
#define LIBRARY_H

#include <QWidget>
#include <QModelIndex>
#include "mediaplayer.h"
#include "createlibrary.h"

namespace Ui {
    class Library;
}

typedef struct
{
    QString name;
    QString path;
}lib;

class CreateLibrary;

class Library : public QWidget
{
    Q_OBJECT

public:
    explicit Library(QTabWidget *tab, MediaPlayer *player, QWidget *parent = 0);
    void changeDirectory();
    void fillList();
    ~Library();

private slots:
    void LibCreated(QString, QString);

    void on_treeView_doubleClicked(const QModelIndex &index);

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_Add_clicked();

    void on_Delete_clicked();

private:
    QTabWidget *_tab;
    MediaPlayer *_player;
    Ui::Library *ui;
    QList<lib> *_fileList;
    QDirModel *modele;
    CreateLibrary *_create;
};

#endif // LIBRARY_H

