#ifndef CREATELIBRARY_H
#define CREATELIBRARY_H

#include <QDialog>
#include "library.h"

namespace Ui {
class CreateLibrary;
}
class Library;

class CreateLibrary : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateLibrary(Library *thelib, QWidget *parent = 0);
    ~CreateLibrary();
    QString name;
    QString path;
    
private slots:
    void on_OK_clicked();

    void on_Cancel_clicked();

    void on_browse_clicked();

signals:
    void created(QString, QString);

private:
    Ui::CreateLibrary *ui;
    Library *_lib;
};

#endif // CREATELIBRARY_H
