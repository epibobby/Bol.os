#ifndef PROTOCOLE_H
#define PROTOCOLE_H

#include <QString>

typedef int NbUsers;
typedef int Port;

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
        Offline,
        Away,
        Busy
};

typedef QString  Login; // 25 caractères max ?

typedef QString  Location;

typedef int      Token; // > 0, (-1 en cas d’erreur)

typedef QString  IP; // ip en notation pointée


struct UserInfo {
        Login		login;
        Token 		token;
        State		state;
        QString	location; // Du genre “Connecté depuis ClientKikouBabel;
};

struct toSend {
    RequestType request;
    UserInfo info;
};

// note sur implementation
enum ServerErrorCode {
        E_AUTH = 1 << 4,			// R_AUTH a echoue
        E_AUTH_DENIED = E_AUTH | 1,	// N’est pas autorise a se R_AUTH
        E_AUTH_ALRDLOG = E_AUTH | 2,	// A deja un token attribue
        E_AUTH_WRGLOG = E_AUTH | 3,	// Login invalide
        E_AUTH_UNVLOG = E_AUTH | 4,	// Login déjà pris
        E_INVSTATE = 2 << 4,		// Status invalide
        E_INVUSR = 3 << 4,			// Le login specifie est invalide (non connecte,...)
        E_INVCMD = 4 << 4,			// Commande invalide
        E_INVARG = 5 << 4,			// Argument invalide (erreur generique)
        E_DENIED = 6 << 4,			// N’est pas autorise a executer la commande (erreur generique)
        E_ERROR = 7 << 4			// Erreur generique
};

enum ClientRequestType
{
        C_ASK_ID,
        C_ID,
        C_DISCONNECT,
        C_PING,
        C_PONG,
        C_ERROR,
        C_MSG,
        C_FILE,
        C_SHARE,
        C_SEARCH, // requete a faire via api dbmovies
        C_MOVIE
};

enum ClientErrorCode {
        D_INVID = 1 << 4,	// ID invalide (erreur optionelle, la connexion peut etre fermee sans pre-avis)
        D_INVCMD = 2 << 4,	// Commande invalide
        D_INVARG = 3 << 4,	// Argument invalide
        D_ERROR = 5 << 4	// Erreur generique
};

#endif // PROTOCOLE_H
