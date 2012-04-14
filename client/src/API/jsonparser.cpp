#include "jsonparser.h"

JsonParser::JsonParser()
{
}

//QList<QMap<QString, QString> >    JsonParser::parseSheet(QByteArray result)
//{
//    qDebug() << "parseShortSheet";
//    bool ok = false;
//    QVariantMap res = parse.parse(result, &ok).toMap();
//    QList<QMap<QString, QString> > objRet;

//    if (!ok)
//        qDebug() << "error of parsing";
//    else
//    {
//        foreach()
//    }

//}

QList<QMap<QString, QString> >    JsonParser::parseSheet(QByteArray result)
{
    qDebug() << "parseShortSheet";
    bool ok = false;
    QVariant res = parse.parse(result, &ok);
    QList<QMap<QString, QString> > objRet;
    if (!ok)
        qDebug() << "error of parsing";
    else
    {

        QVariantList elem = res.toList();
        foreach(QVariant obj, elem)
        {
//            foreach (QVariant plugin, obj["keywords"].toList()) {
//            qDebug() << "\t-" << plugin.toString();
//           }
            QVariantMap map = obj.toMap();
            QMap<QString, QString> movie;
            if (obj.toString() != "Nothing found.")
            {
                foreach(QString key, map.keys())
                {

                    movie.insert(key, map[key].toString());
                }
            }
            objRet.push_back(movie);
        }
    }
    return objRet;
}

void JsonParser::dumpSheet(QList<QMap<QString, QString> > objRet)
{
    while(!objRet.isEmpty())
    {
        QMap<QString,QString> map = objRet.first();
        objRet.pop_front();
        QMapIterator<QString, QString> i(map);
        while (i.hasNext()) {
            i.next();
            qDebug() << i.key() << ": " << i.value() << endl;
        }
    }
}
