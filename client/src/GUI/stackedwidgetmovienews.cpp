#include "stackedwidgetmovienews.h"
#include "ui_stackedwidgetmovienews.h"

StackedWidgetMovieNews::StackedWidgetMovieNews(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::StackedWidgetMovieNews)
{
    ui->setupUi(this);
    _movieTimer = new QTimer();
    _movieTimer->connect(_movieTimer, SIGNAL(timeout()),this, SLOT(ChangeMovie()));
    _movieTimer->setSingleShot(true);
}

StackedWidgetMovieNews::~StackedWidgetMovieNews()
{
    delete ui;
}

void StackedWidgetMovieNews::ChangeMovie()
{
    _movieTimer->start(5000);
}
