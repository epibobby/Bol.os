#ifndef MODELIRC_H
#define MODELIRC_H
#include <QList>
#include "userInputHandler.h"
#include "channel.h"
class ModelIRC
{
    Q_OBJECT

private :
    QList<Channel> myChannels;
    QList<QString> myPvs;
    UserInputHandler inputHandler;

public:
    ModelIRC();
    void setMyChannels(QList<Channel> & myChannel) {this->myChannels = myChannel;}
    QList<Channel> & getMyChannels(){return this->myChannels;}
    void setMyPvs(QList<QString> & myPvs){this->myPvs = myPvs;}
    QList<QString> & getMyPvs(){ return this->myPvs;}
};

#endif // MODELIRC_H
