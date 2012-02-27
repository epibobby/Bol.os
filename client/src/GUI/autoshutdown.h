#ifndef AUTOSHUTDOWN_H
#define AUTOSHUTDOWN_H

#include <QWidget>
#include <QTimer>
#include <iostream>
#include <QProcess>

namespace Ui {
    class AutoShutdown;
}

class AutoShutdown : public QWidget
{
    Q_OBJECT

public:
    explicit AutoShutdown(QWidget *parent = 0);
    ~AutoShutdown();
    void Start();
    void Stop();
    QIcon getIcon(QString path);

private slots:
    void Shutdown();
    void Sleep();
    void Restart();

    void on_Shutdown_clicked();

    void on_Sleep_clicked();

    void on_Restart_clicked();

private:
    Ui::AutoShutdown *ui;
    bool _launch;
};

#endif // AUTOSHUTDOWN_H
