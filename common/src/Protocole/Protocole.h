#ifndef PROTOCOLE_H
#define PROTOCOLE_H

#include <iostream>
#include <sstream>
#include <QCryptographicHash>
#include <QtNetwork>
#include <QObject>
#include <QTcpServer>
#include <QDataStream>
#include <cstring>
#include <QTcpSocket>
#include <iostream>
#include <QHostAddress>
#include <QTimer>

enum RequestType {
    R_GETUSERLIST,
    R_GETUSERINFO,
    R_AUTH,
    R_SETSTATE,
    R_GETMOVIE,
    R_GETACTOR,
    R_DISCONNECT,
    R_SET_COMMENT,
    R_GET_COMMENT,
    R_SET_NOTE,
    R_MSG,
    R_SETLOCATION,
    R_RECOMMANDATION,
    R_SETTOKEN,
    R_TIMEOUT,
    R_USERLIST,
    R_MOVIE,
    R_ACTOR,
    R_USERINFO,
    R_DISCONNECTED,
    R_MOVIESHEET,
    R_ERROR,
    R_SEND_RECOM,
    R_COMMENT,
    R_NOTE,
    R_PING,
    R_PONG,
    R_OK_,
    R_KO,
    R_NEW,
    NO_RQST
};

enum State {
    Online,
    Away,
    Busy,
    Offline
};

//struct	api_bdd
//{
//    bool multi;
//    QByteArray  info;
//};

typedef QString  Login; // 25 caractères max ?

typedef QString  Location;

typedef int      Token; // > 0, (-1 en cas d’erreur)

typedef QString  IP; // ip en notation pointée
typedef int Port;

struct   Data
{
    RequestType rqst;
    QString     info;
};

struct   UserInfo
{
    RequestType rqst;
    QString		token;
    QString		login;
    QString 	location; // Du genre “Connecté depuis ClientKikouBabel;
    State		state;
};


#endif // PROTOCOLE_H
