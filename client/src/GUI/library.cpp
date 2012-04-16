#include "library.h"
#include "ui_library.h"
#include <QFileDialog>
#include <QFileSystemModel>
#include <QTableView>
#include <QVBoxLayout>
#include <QDirModel>
#include <QTreeView>
#include <iostream>

Library::Library(QTabWidget *tab, MediaPlayer *player, QWidget *parent) : _tab(tab), _player(player),
    QWidget(parent),
    ui(new Ui::Library)
{
    ui->setupUi(this);
    _create = new CreateLibrary(this);
    modele = new QDirModel;
    ui->treeView->setModel(modele);
    ui->treeView->header()->resizeSection(0,300);
    lib *tmp = new lib();
    tmp->name = "Best movies";
    tmp->path = "D:/";
    _fileList = new QList<lib>();
    _fileList->append(*tmp);
    QFont test;
    test.setFamily("Europe_Ext");
    test.setWeight(21);
    test.setBold(true);
    ui->listWidget->setFont(test);
    for (int x = 0; x != _fileList->size(); x++) {
        QString tmp = _fileList->at(x).name;
        std::cout << "Valeur x = " << x << std::endl;
        new QListWidgetItem(tr(tmp.toStdString().c_str()), ui->listWidget);
    }
    ui->treeView->setRootIndex(modele->index("./"));
    connect(_create, SIGNAL(created(QString, QString)), this, SLOT(LibCreated(QString, QString)));
//    QFileSystemModel *model = new QFileSystemModel;
//    model->setRootPath(QDir::currentPath());
//    ui->listFiles->setModel(model);
//    ui->listFiles->setRootIndex(model->index("./"));
//    ui->listFiles->setIconSize (QSize (128,128));
//    ui->listFiles->setViewMode( QListView::ListMode );
//    ui->listFiles->setDragEnabled( true );
//    ui->listFiles->setAcceptDrops( true );
//    ui->listFiles->setDropIndicatorShown( true );
//    ui->listFiles->setDragDropMode(QAbstractItemView::InternalMove );
//    ui->listFiles->setDragDropOverwriteMode (true);
}

void Library::changeDirectory()
{
//    QString path = QFileDialog::getExistingDirectory(this, tr("Directory"), directory.path());
//    if ( path.isNull() == false )
//    {
//        directory.setPath(path);
//        fillList();
//    }
}

void Library::fillList()
{
//    ui->listWidget->clear();
//    ui->listWidget->addItems(directory.entryList());
}

void Library::LibCreated(QString name, QString path)
{
    lib newone;
    newone.name = name;
    newone.path = path;
    _fileList->append(newone);
    new QListWidgetItem(tr(name.toStdString().c_str()), ui->listWidget);
}

Library::~Library()
{
    delete ui;
}

void Library::on_treeView_doubleClicked(const QModelIndex &index)
{
     //_player->setFile();
     QList<QString> *list = new QList<QString>();
     list->append(ui->treeView->currentIndex().data().toString());
     while (ui->treeView->currentIndex().parent().data().toString() != 0) {
         list->append(ui->treeView->currentIndex().parent().data().toString());
         std::cout << "Index Parent : " << ui->treeView->currentIndex().parent().data().toString().toStdString() << std::endl;
         ui->treeView->setCurrentIndex(ui->treeView->currentIndex().parent());
     }
    QString path;
    for (int x = list->size() - 1; x != -1; x--)
       if (x != 0)
         path += list->at(x) + "/";
       else
         path += list->at(x);
     _player->setFile(path);
     // ui->treeView->setRootIndex(modele->index(ui->treeView->currentIndex().data().toString()));
     std::cout << "Index : " << path.toStdString() << std::endl;
      //       QString ipnum = ui->treeView->model()->index(ui->treeView->currentIndex().row(),2).data().toString();
     ui->treeView->setModel(modele);
     _tab->setCurrentIndex(2);
}

void Library::on_listWidget_doubleClicked(const QModelIndex &index)
{
    for (int x = 0; x != _fileList->size(); x++) {
        if (_fileList->at(x).name == ui->listWidget->currentItem()->text())
           ui->treeView->setRootIndex(modele->index(_fileList->at(x).path));
    }
}

void Library::on_Add_clicked()
{
    _create->show();
}

void Library::on_Delete_clicked()
{
    for (int x = 0; x != _fileList->size(); x++) {
        if (_fileList->at(x).name == ui->listWidget->currentItem()->text()) {
          _fileList->removeAt(x);
          break;
        }
    }
    QList<QListWidgetItem *> fileSelected = ui->listWidget->selectedItems();
    std::cout << " sapasse : " << ui->listWidget->currentItem()->text().toStdString()  << std::endl;
   // QList<QListWidgetItem *> selectedFiles= ui->listWidget->selectedItems();
    if(fileSelected.size())
    {
        for (int i = 0; i < ui->listWidget->count(); ++i)
        {
            if(ui->listWidget->item(i)->isSelected())
            {
                QListWidgetItem * item = ui->listWidget->takeItem(i);
                delete item;
            }
        }
    } else
    {
        QMessageBox::information(this, tr("File selection warning"), tr("You must select a file to remove it from the list"));
    }

}
