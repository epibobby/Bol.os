#ifndef ALERT_H
#define ALERT_H

#include <QDialog>

namespace Ui {
    class Alert;
}

class Alert : public QDialog
{
    Q_OBJECT

public:
    explicit Alert(QWidget *parent = 0);
    void setMessage(QString msg);
    ~Alert();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Alert *ui;
    QString _message;
};

#endif // ALERT_H
