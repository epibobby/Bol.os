#include "jsonparser.h"

JsonParser::JsonParser()
{
}

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
        qDebug() << "ready to read byte";
        foreach(QVariant obj, elem)
        {
        qDebug() << "answers";
            QVariantMap map = obj.toMap();
            QMap<QString, QString> movie;
            qDebug() << obj.toString();
            if (obj.toString() != "Nothing found.")
            {
                qDebug() << "keys";
                foreach(QString key, map.keys())
                {
                    movie.insert(key, map[key].toString());
                }
            }
            objRet.push_back(movie);
        }
    }
//    while(!objRet.isEmpty())
//    {
//        QMap<QString,QString> map = objRet.first();
//        objRet.pop_front();
//        QMapIterator<QString, QString> i(map);
//        while (i.hasNext()) {
//            i.next();
//            qDebug() << i.key() << ": " << i.value() << endl;
//        }
//    }
    return objRet;
}
