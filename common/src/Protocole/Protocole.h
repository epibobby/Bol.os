#ifndef PROTOCOLE_H
#define PROTOCOLE_H

#include <QString>

typedef int NbUsers;
typedef int Port;

enum ServerRequestType {
        R_AUTH,
        R_GETUSERLIST,
        R_GETUSERINFO,
        R_SETSTATE,
        R_DISCONNECT,
        R_DISCONNECTED,
        R_SETTOKEN,
        R_TIMEOUT,
        R_USERLIST,
        R_USERINFO,
        R_UPDATEMOVIE,
        R_MOVIEINFO,
        R_ERROR,
        R_PING,
        R_PONG,
        R_MSG,
        R_FILE,
        R_SHARE,
        R_SETLOCATION,
        R_PUB
};

enum State {
        Online,
        Offline,
        Away,
        Busy
};

typedef QString  Login; // 25 caract�res max ?

typedef QString  Location;

typedef int      Token; // > 0, (-1 en cas d�erreur)

typedef QString  IP; // ip en notation point�e


struct UserInfo {
        Login 		login;
        Token		token;
        IP 		ip;
        State		state;
        Location	location; // Du genre �Connect� depuis ClientKikouBabel
};

// note sur implementation
enum ServerErrorCode {
        E_AUTH = 1 << 4,			// R_AUTH a echoue
        E_AUTH_DENIED = E_AUTH | 1,	// N�est pas autorise a se R_AUTH
        E_AUTH_ALRDLOG = E_AUTH | 2,	// A deja un token attribue
        E_AUTH_WRGLOG = E_AUTH | 3,	// Login invalide
        E_AUTH_UNVLOG = E_AUTH | 4,	// Login d�j� pris
        E_INVSTATE = 2 << 4,		// Status invalide
        E_INVUSR = 3 << 4,			// Le login specifie est invalide (non connecte,...)
        E_INVCMD = 4 << 4,			// Commande invalide
        E_INVARG = 5 << 4,			// Argument invalide (erreur generique)
        E_DENIED = 6 << 4,			// N�est pas autorise a executer la commande (erreur generique)
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
