#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <sstream>
#include <QCryptographicHash>
#include <QtNetwork>
#include <QObject>
#include <QTcpServer>
#include "client.h"

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
    void    add_to_list(client *new_c);
    void    synchro_client(client *c_new); // timer pour le ping/pong
    QString generate_token(client *c_new);

public slots:
        // interaction server/client
    void acceptConnection();
    void startRead();
    void deco();

private:
    QTcpServer            server; // sock server
    QString               w_buff; // buff write
    QString               r_buff; // buff read
    int                   nb_client; // client sur le server
    std::list<client *>   l_client; // liste clients

    QTcpSocket            *sock; // sock neutre pour attribution
    client                *c_new; // objet neutre pour attribution
};

#endif // SERVER_H
