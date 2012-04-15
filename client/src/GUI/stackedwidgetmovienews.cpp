#include "stackedwidgetmovienews.h"
#include "ui_stackedwidgetmovienews.h"

StackedWidgetMovieNews::StackedWidgetMovieNews(ApiMovie *api, QWidget *parent) : _api(api),
    QStackedWidget(parent),
    ui(new Ui::StackedWidgetMovieNews)
{
    ui->setupUi(this);
    pos = 0;
    _randomMovies = new QList<QString>();
    _listMovies = new ListMovies(_api);
    _listMovies->hide();
    _randomMovies->append("spider-man");
    _randomMovies->append("spider-man 2");
    _randomMovies->append("spider-man 3");
    _movieTimer = new QTimer();
    //_movieTimer->start(5000);
    _movieTimer->connect(_movieTimer, SIGNAL(timeout()),this, SLOT(ChangeMovie()));
    //connect(_api, SIGNAL(found(QList<QMap<QString, QString> >)), this, SLOT(IncomingSheet(QList<QMap<QString, QString> >)));
    _movieTimer->setSingleShot(true);
}

StackedWidgetMovieNews::~StackedWidgetMovieNews()
{
    delete ui;
}

void StackedWidgetMovieNews::ChangeMovie()
{
    if (pos == 2)
        pos = 0;
    IncomingSheet(_api->requestASheet(_randomMovies->at(pos++), false));
    _movieTimer->start(5000);
}

void StackedWidgetMovieNews::IncomingSheet(QList<QMap<QString, QString> > list)
{
    Sheet2 sheet;
    QList<InfoMovies> list2;
    while(!list.isEmpty())
       {
           InfoMovies tmp;
           QTextDocument *text = new QTextDocument();
           QMap<QString,QString> map = list.first();
           list.pop_front();
           QMapIterator<QString, QString> i(map);
           while (i.hasNext()) {
               i.next();
              if (i.key() == "original_name") {
                  ui->SumUpMinuteMovieText->setDocumentTitle(i.value());
                  ui->Title->setText(i.value());
              }
              else if (i.key() == "id")
                tmp.id = i.value();
              else if (i.key() == "overview")
               ui->SumUpMinuteMovieText->setPlainText(i.value());
//              else if (i.key() == "trailer") {
//                //  this->trailer = i.value();
//              }
//              else if (i.key() == "tagline") {
//                  ui->Title2->setText(i.value());
//              }
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
        ui->SumUpMinuteMovieText->setFont (QFont("Arial", 15));
        //UpdateMovie(sheet);
    }
}
