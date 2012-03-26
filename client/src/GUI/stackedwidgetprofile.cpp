#include "stackedwidgetprofile.h"
#include "ui_stackedwidgetprofile.h"

StackedWidgetProfile::StackedWidgetProfile(QWidget *parent) :
    QStackedWidget(parent),
    ui(new Ui::StackedWidgetProfile)
{
    ui->setupUi(this);
}

StackedWidgetProfile::~StackedWidgetProfile()
{
    delete ui;
}
