#include "channel.h"

Channel::Channel(QString name, QString Topic, QList<QString> users)
{
    this->Name = name;
    this->Topic = Topic;
    this->users = users;
}
