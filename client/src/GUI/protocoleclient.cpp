#include "ProtocoleClient.h"
#include <iostream>

ProtocoleClient::ProtocoleClient(ClientConnection *client) : _client(client)
{
    //funcPtr = new Methods();
// _Methods = Tab;
}

bool ProtocoleClient::callMethod(RequestType request, UserInfo info)
{
     Ptr Tab[] = {
        { R_AUTH, &ProtocoleClient::SETTOKEN },
        { R_GETUSERLIST, &ProtocoleClient::TIMEOUT },
        { R_GETUSERINFO, &ProtocoleClient::USERLIST },
        { R_SETSTATE, &ProtocoleClient::MOVIELIST },
        { R_GETMOVIE, &ProtocoleClient::SETTOKEN },
        { R_GETACTOR, &ProtocoleClient::TIMEOUT },
        { R_DISCONNECT, &ProtocoleClient::USERLIST },
        { R_SET_COMMENT, &ProtocoleClient::MOVIELIST },
        { R_GET_COMMENT, &ProtocoleClient::SETTOKEN },
        { R_SET_NOTE, &ProtocoleClient::TIMEOUT },
        { R_MSG, &ProtocoleClient::USERLIST },
        { R_SETLOCATION, &ProtocoleClient::MOVIELIST },
        { R_RECOMMANDATION, &ProtocoleClient::SETTOKEN },
        { R_SETTOKEN, &ProtocoleClient::TIMEOUT },
        { R_TIMEOUT, &ProtocoleClient::USERLIST },
        { R_USERLIST, &ProtocoleClient::MOVIELIST },
        { R_MOVIE, &ProtocoleClient::SETTOKEN },
        { R_ACTOR, &ProtocoleClient::TIMEOUT },
        { R_USERINFO, &ProtocoleClient::USERLIST },
        { R_DISCONNECTED, &ProtocoleClient::MOVIELIST },
        { R_MOVIESHEET, &ProtocoleClient::SETTOKEN },
        { R_ERROR, &ProtocoleClient::TIMEOUT },
        { R_SEND_RECOM, &ProtocoleClient::USERLIST },
        { R_COMMENT, &ProtocoleClient::MOVIELIST },
        { R_NOTE, &ProtocoleClient::SETTOKEN },
        { R_PING, &ProtocoleClient::PONG },
        { R_PONG, &ProtocoleClient::USERLIST }
    };
   return (call(*this, Tab[static_cast<int>(request)].ptr)(info));
}

bool ProtocoleClient::SETTOKEN(UserInfo info)
{
    //std::cout << "Set Token = " << info.token << std::endl;
    if (info.token != 0)
        return true;
    std::cerr << "Error Protocole : SETTOKEN" << std::endl;
    return false;
}

bool ProtocoleClient::TIMEOUT(UserInfo info)
{
    return true;
}

bool ProtocoleClient::USERLIST(UserInfo info)
{
    return true;
}

bool ProtocoleClient::MOVIELIST(UserInfo info)
{
    return true;
}

bool ProtocoleClient::PONG(UserInfo info)
{
    _client->writeOnServer(_client->prepareMsg(R_PONG));
    return true;
}
