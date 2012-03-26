#include "autoshutdown.h"
#include "ui_autoshutdown.h"

AutoShutdown::AutoShutdown(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AutoShutdown), _launch(false)
{
    ui->setupUi(this);
}

AutoShutdown::~AutoShutdown()
{
    delete ui;
}

QIcon AutoShutdown::getIcon(QString path)
{
    QImage img;
    QPixmap pix;
    QIcon icon;
    img.load(path);
    pix.convertFromImage(img);
    icon.addPixmap(pix);
    return (icon);
}

void AutoShutdown::Start()
{
    _launch = true;
    ui->Shutdown->setIcon(getIcon("D:/images/delete.png"));
    ui->Sleep->hide();
    ui->Restart->hide();
    ui->Time->setEnabled(false);
    ui->text->setEnabled(false);
}

void AutoShutdown::Stop()
{
    //stopper le shutdown
    _launch = false;
    ui->Time->setEnabled(true);
    ui->text->setEnabled(true);
    ui->Shutdown->setIcon(getIcon("D:/images/shutdown.gif"));
    ui->Sleep->show();
    ui->Restart->show();
}

void AutoShutdown::on_Shutdown_clicked()
{
    if (_launch == false) {
        Start();
        QTimer *timer = new QTimer();
        timer->connect(timer, SIGNAL(timeout()),this, SLOT(Shutdown()));
        timer->start(ui->Time->currentText().toInt() * 60000);
    }
    else
        Stop();
}

void AutoShutdown::on_Sleep_clicked()
{
    if (_launch == false) {
        Start();
        QTimer *timer = new QTimer();
        timer->connect(timer, SIGNAL(timeout()),this, SLOT(Sleep()));
        timer->start(ui->Time->currentText().toInt() * 60000);
    }
    else
        Stop();
}

void AutoShutdown::on_Restart_clicked()
{
    if (_launch == false) {
        Start();
        QTimer *timer = new QTimer();
        timer->connect(timer, SIGNAL(timeout()),this, SLOT(Restart()));
        timer->start(ui->Time->currentText().toInt() * 60000);
    }
    else
        Stop();
}

void AutoShutdown::Shutdown()
{
    std::cout << "SHUTDOWN NOW" << std::endl;
    QStringList arguments;
    QString time(ui->Time->currentText());
    std::cout << time.toStdString() << std::endl;
    arguments << "-h" << time;
    QProcess::execute("shutdown", arguments);
}

void AutoShutdown::Sleep()
{
    QStringList arguments;
    QString time(ui->Time->currentText());
    std::cout << time.toStdString() << std::endl;
    arguments << "-h" << time;
    QProcess::execute("shutdown", arguments);
}

void AutoShutdown::Restart()
{
    QStringList arguments;
    QString time(ui->Time->currentText());
    std::cout << time.toStdString() << std::endl;
    arguments << "-h" << time;
    QProcess::execute("shutdown", arguments);
}
