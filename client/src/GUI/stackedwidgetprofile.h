#ifndef STACKEDWIDGETPROFILE_H
#define STACKEDWIDGETPROFILE_H

#include <QStackedWidget>

namespace Ui {
    class StackedWidgetProfile;
}

class StackedWidgetProfile : public QStackedWidget
{
    Q_OBJECT

public:
    explicit StackedWidgetProfile(QWidget *parent = 0);
    ~StackedWidgetProfile();

private:
    Ui::StackedWidgetProfile *ui;
};

#endif // STACKEDWIDGETPROFILE_H
