#ifndef CONNECTIONSETTINGS_H
#define CONNECTIONSETTINGS_H

#include <QDialog>

namespace Ui {
    class ConnectionSettings;
}

class ConnectionSettings : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectionSettings(QWidget *parent = 0);
    ~ConnectionSettings();
    QString getHost() const;
    QString getPort() const;

private slots:
    void on_Ok_clicked();

    void on_Reset_clicked();

private:
    Ui::ConnectionSettings *ui;
    QString _host;
    QString _port;
};

#endif // CONNECTIONSETTINGS_H
