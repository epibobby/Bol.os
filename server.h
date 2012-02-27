#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <sstream>
#include <QCryptographicHash>
#include <QtNetwork>
#include <QObject>
#include <QTcpServer>
#include <QDataStream>
#include <cstring>
#include "client.h"
#include "Protocole.h"


class Server: public QObject
{
    Q_OBJECT

public:
    // serveur lui meme
    Server(QObject * parent = 0);
    ~Server();

    // interaction server/client
    void    write_token(client *c_new); // write avec generation de token
    void    write(QTcpSocket *sock);

    // outils de gestion
    void    list_client();

    // mise en place de la connection
    bool    init_client(client *new_c, QTcpSocket *sock);
    bool    check_ip(QHostAddress ip); // eviter la double connection
    void    check_ping();
    QString generate_token(client *c_new);

    //protocole
    bool    check_and_do();
    void    _PONG_();
    void    _R_SETTOKEN_();
    //    void    _R_SETLOCATION_();
    //    void    _R_TIMEOUT_();
    void    _R_USERLIST_();
    //    void    _R_MOVIELIST_();
    //    void    _R_USERINFO_();
    //    void    _R_DISCONNECTED_();
    //    void    _R_MOVIESHEET_();
    //    void    _R_ERROR_();
    //    void    _R_SEND_RECOM_();
    //    void    _R_COMMENT_();
    //    void    _R_NOTE_();c
    //    void    _R_PING_();

public slots:
    // interaction server/client
    void _PING_();
    void acceptConnection();
    void startRead();
    void deco();

private:
    QTcpServer            server; // sock server
    QString               w_buff; // buff write
    QString               r_buff; // buff read
    QByteArray           tmp;
    int                   nb_client; // client sur le server
    QList<client*>     l_client; // liste clients
    QTcpSocket            *sock; // sock neutre pour attribution
    client                *c_new; // objet neutre pour attribution
    QTimer                *timer;
    //ApiMovie              *tools; // surcouche film via api externe
};

#define call(objet, func)((objet).*(func))

typedef void (Server::*P)(void);

typedef struct  _func
{
    RequestType cmd;
    P           func;
}               ptr_func;

#endif // SERVER_H
