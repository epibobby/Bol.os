#include "createlibrary.h"
#include "ui_createlibrary.h"

CreateLibrary::CreateLibrary(Library *thelib, QWidget *parent) : _lib(thelib),
    QDialog(parent),
    ui(new Ui::CreateLibrary)
{
    ui->setupUi(this);
}

CreateLibrary::~CreateLibrary()
{
    delete ui;
}

void CreateLibrary::on_OK_clicked()
{
    name = ui->name->text();
    path = ui->path->text();
    if (name != 0 && path != 0) {
        emit created(name,path);
        hide();
    }
}

void CreateLibrary::on_Cancel_clicked()
{
    hide();
}

void CreateLibrary::on_browse_clicked()
{
    QFileDialog fileDialog(this, "Choose your folder");
    fileDialog.setNameFilter("Folder (*)");
    fileDialog.exec();
}
