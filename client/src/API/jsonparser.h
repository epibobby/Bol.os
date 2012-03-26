#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <QByteArray>
#include <QtScript/QScriptEngine>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <qjson_export.h>
#include <parser.h>

class JsonParser : public QObject
{
    Q_OBJECT
    QJson::Parser parse;
    bool ok;
public:
    JsonParser();
    QList<QMap <QString, QString> >    parseSheet(QByteArray result);
};

#endif // JSONPARSER_H
