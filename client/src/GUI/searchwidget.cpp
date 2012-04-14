#include "searchwidget.h"
#include "ui_searchwidget.h"

SearchWidget::SearchWidget(ApiMovie *api, QWidget *parent) :
    _api(api),
    QWidget(parent),
    ui(new Ui::SearchWidget)
{
    _listMovies = new ListMovies(_api);
    ui->setupUi(this);
    connect(_api, SIGNAL(found(QList<QMap<QString, QString> >)), this, SLOT(IncomingSheet(QList<QMap<QString, QString> >)));
}

void SearchWidget::IncomingSheet(QList<QMap<QString, QString> > list)
{
    Sheet sheet;
    QList<InfoMovies> list2;
    while(!list.isEmpty())
       {
           InfoMovies tmp;
           QMap<QString,QString> map = list.first();
           list.pop_front();
           QMapIterator<QString, QString> i(map);
           while (i.hasNext()) {
               i.next();
              if (i.key() == "original_name") {
                  sheet.title = i.value();
                  tmp.title = i.value();
              }
              else if (i.key() == "id")
                tmp.id = i.value();
              else if (i.key() == "overview")
               sheet.summary = i.value();
              else if (i.key() == "trailer") {
                  this->trailer = i.value();
              }
              else if (i.key() == "tagline") {
                  ui->Title2->setText(i.value());
              }
             qDebug() << i.key() << ": " << i.value() << endl;
           }
           if (tmp.id != 0)
            list2.append(tmp);
       }
    //Si resultats > 1 afficher la liste sinon afficher direct la fiche
    if (list2.length() > 1) {
        _listMovies->AddListMovies(list2);
        _listMovies->show();
    }
    else {
        _listMovies->hide();
        ui->SumUpMovieText->setFont (QFont("Arial", 15));
        UpdateMovie(sheet);
    }
}

void SearchWidget::UpdateMovie(Sheet sheet)
{
    ui->Title->setText(sheet.title);
    ui->SumUpMovieText->setText(sheet.summary);
}

SearchWidget::~SearchWidget()
{
    delete ui;
}

void SearchWidget::on_Search_clicked()
{
    _api->requestASheet(ui->SearchMovie->text());
}

void SearchWidget::on_PlayTrailer_clicked()
{
    QDesktopServices::openUrl(QUrl(this->trailer));
}
