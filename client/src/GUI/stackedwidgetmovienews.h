#ifndef STACKEDWIDGETMOVIENEWS_H
#define STACKEDWIDGETMOVIENEWS_H

#include <QStackedWidget>
#include <QTimer>

namespace Ui {
    class StackedWidgetMovieNews;
}

class StackedWidgetMovieNews : public QStackedWidget
{
    Q_OBJECT

public:
    explicit StackedWidgetMovieNews(QWidget *parent = 0);
    ~StackedWidgetMovieNews();

private slots:
    void ChangeMovie();

private:
    Ui::StackedWidgetMovieNews *ui;
    QTimer *_movieTimer;
};

#endif // STACKEDWIDGETMOVIENEWS_H
