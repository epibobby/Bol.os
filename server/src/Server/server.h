#ifndef SERVER_H
#define SERVER_H

#include <QtNetwork>
#include <QObject>
#include <QTcpServer>
#include "client.h"

class Server: public QObject
{
Q_OBJECT

public:

   Server(QObject * parent = 0);
  ~Server();

public slots:

  void acceptConnection();
  void add_to_list(client *new_c);
  void startRead();
  void list_client();
  bool init_client(client *new_c, QTcpSocket *sock);
  bool check_ip(QHostAddress ip);

private:

  std::list<client *>   l_client;
  QTcpServer server;
  client                *c_new;
  int                   nb_client;
};

#endif // SERVER_H
