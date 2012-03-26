#ifndef APIMOVIE_H
#define APIMOVIE_H

#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>
#include <QObject>
#include <QList>
#include <QString>
#include <QVariant>
#include <QDir>
#include "jsonparser.h"
#define URLAPI "http://api.themoviedb.org/2.1/"
class ApiMovie : public QObject
{
    Q_OBJECT
    QString *URLApi;
    QString *authKey;
    QString *token;
    QNetworkAccessManager *net;
    JsonParser *jsonparse;
public:
    ApiMovie();
    void requestASheet(QString search, bool person = false);
    QStringList loadLibrary(QString path);
private:
    QByteArray localSearch(QString search);
    void remoteSearch(QString search, bool person);
    void requestApi(QUrl url);
    void JsonSheetToObject(QByteArray sheet);
signals:
    void found(QList<QMap<QString, QString> >);
    void JsonReady();
public slots:
    void remoteAnswer(QNetworkReply *reply);
};

#endif // APIMOVIE_H
