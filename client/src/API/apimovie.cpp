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

void ApiMovie::requestASheet(QString search, bool person)
{
    qDebug() << "requestASheet";
    QByteArray sheet;
    sheet = localSearch(search);
    if (sheet.isEmpty())
        remoteSearch(search, person);
    else
        JsonSheetToObject(sheet);
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
    search = search.replace(QRegExp("\\s+"), "+");
    if (person)
        function = "http://api.themoviedb.org/3/search/person?api_key=" + (*authKey) + "&query=";
    else
        function = "http://api.themoviedb.org/2.1/Movie.search/en/json/" + (*authKey) + "/";
    net->get(QNetworkRequest(QUrl(function + search)));
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
        qDebug() << name << QDir::currentPath();
        QFile newSheet(name);
        if (!newSheet.exists())
        {
            newSheet.open(QIODevice::WriteOnly);
            newSheet.write(sheet);
        }
    }
    qDebug() << "a tout fini";
    emit found(obj);
}


QStringList ApiMovie::loadLibrary(QString path)
{
    QFileInfo libDir("./index");
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
        // check if the lib is up to date
//        if (!isUpToDate)
//        {
            QTextStream str(&index);
            foreach (QString movie, listMovies)
                str << movie << "\n";
//        }
        index.close();
    }
    return listMovies;
}
