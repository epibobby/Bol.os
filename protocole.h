#ifndef PROTOCOLE_H
#define PROTOCOLE_H

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
    R_PONG
};

enum State {
    Online,
    Away,
    Busy
};



struct	api_bdd
{
    bool multi;
    QByteArray  info;
};

struct UserInfo {
    QString		login;
    QString		token;
    QString 	location; // Du genre “Connecté depuis ClientKikouBabel;
    State		state;
};

#endif // PROTOCOLE_H
