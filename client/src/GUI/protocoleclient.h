#ifndef PROTOCOLECLIENT_H
#define PROTOCOLECLIENT_H

#include "../../../common/src/Protocole/Protocole.h"
#include "clientconnection.h"

class ClientConnection;

class ProtocoleClient
{
public:
    ProtocoleClient(ClientConnection*);
    bool callMethod(RequestType, UserInfo);
     ClientConnection *_client;

   // const PointeurMethode *_Methods;
    bool SETTOKEN(UserInfo);
    bool TIMEOUT(UserInfo);
    bool USERLIST(UserInfo);
    bool MOVIELIST(UserInfo);
    bool PONG(UserInfo);
};

#define call(objet, ptr) ((objet).*(ptr))

typedef bool (ProtocoleClient::*F)(UserInfo);

typedef struct PointeurMethode
{
  int method;
  F ptr;
}Ptr;

#endif // PROTOCOLECLIENT_H
