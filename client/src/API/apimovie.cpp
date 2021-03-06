#include "apimovie.h"

ApiMovie::ApiMovie()
{
    qDebug() << "constructor";
    this->net = new QNetworkAccessManager(this);
    this->URLApi = new QString(URLAPI);
    this->authKey = new QString("658d17d384fbebff7814d75fa962450d");
    this->jsonparse = new JsonParser();
    connect(net, SIGNAL(finished(QNetworkReply*)), this, SLOT(remoteAnswer(QNetworkReply*)));
    if (!QDir("./Sheets").exists())
    {
        QDir lib;
        lib.mkdir("Sheets");
    }
}

QList<QMap<QString, QString> > ApiMovie::requestASheet(QString search, bool person)
{
    qDebug() << "requestASheet";
    QByteArray sheet;
//    sheet = localSearch(search);
//    if (sheet.isEmpty())
        remoteSearch(search, person);
//    else
//        JsonSheetToObject(sheet);
        return this->listMovies;
}


QByteArray ApiMovie::localSearch(QString search)
{
    qDebug() << "localSearch";
    QDir sheetLib;
    QStringList filters;
    QStringList found;
    QByteArray sheet;
    sheetLib.setCurrent("./Sheets");
    filters << search.toLower().replace(QRegExp("[\\W]+"),"_");
    sheetLib.setNameFilters(filters);
    found = sheetLib.entryList();
    if (found.count() == 1)
    {
        QFile toto(QString(found.first()));
        toto.open(QIODevice::ReadWrite);
        if (toto.isOpen())
        {
            sheet = toto.readAll();
            qDebug() << "found local sheet";
        }
    }
    return sheet;
}

void ApiMovie::remoteSearch(QString search, bool person)
{
    qDebug() << "remoteSearch(";
    QString function;
    if (search[0] != '#')
        search = search.replace(QRegExp("\\s+"), "+");
    if (person && search[0] != '#')
        function = "http://api.themoviedb.org/3/search/person?api_key=" + (*authKey) + "&query=" + search;
    else if (search[0] == '#')
    {
        search = search.remove(0, 1);
        if (person)
    {
           function = "http://api.themoviedb.org/3/person/"+ search + "?api_key=" + (*authKey);

        }
        else
        function = "http://api.themoviedb.org/2.1/Movie.getInfo/en/json/" + (*authKey) + "/" + search;
    }
    else
        function = "http://api.themoviedb.org/2.1/Movie.search/en/json/" + (*authKey) + "/" + search;

    net->get(QNetworkRequest(QUrl(function )));
}

void ApiMovie::remoteAnswer(QNetworkReply *reply)
{
    qDebug() << "remoteAnswer();";
    if (reply->error() == QNetworkReply::NoError)
        JsonSheetToObject(reply->readAll());
    else
        qDebug() << "error api answer " << reply->errorString();
}

void ApiMovie::JsonSheetToObject(QByteArray sheet)
{
    qDebug() << "JsonSheetToObject();";
    QList<QMap<QString, QString> > obj;
    obj = this->jsonparse->parseSheet(sheet);
    if (!obj.isEmpty())
    {
        QString name = obj.first().value("name").toLower();
        name = name.replace(QRegExp("[\\W]+"), "_");
        QFile newSheet(name);
        if (!newSheet.exists())
        {
            newSheet.open(QIODevice::WriteOnly);
            newSheet.write(sheet);
        }
    }
    qDebug() << "a tout fini";
    this->jsonparse->dumpSheet(obj);
    emit found(obj);
    this->listMovies = obj;
}


QStringList ApiMovie::loadLibrary(QString path)
{
    QDir lib;
    QStringList filters;
    QStringList listMovies;
    QFile index("./index");

    lib.cd(path);
    filters << "*.avi" << "*.mpg" << "*.mpeg" << "*.mkv" << "*.avi" << "*.mp4";
    lib.setNameFilters(filters);
    listMovies = lib.entryList(filters);
    if (index.open(QFile::WriteOnly | QFile::Text))
    {
            QTextStream str(&index);
            foreach (QString movie, listMovies)
                str << movie << "\n";
        index.close();
    }
    return listMovies;
}
