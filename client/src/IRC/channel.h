#ifndef CHANNEL_H
#define CHANNEL_H
#include <QMainWindow>
#include <QResizeEvent>
#include <QLineEdit>
#include <QDebug>
#include <IrcMessage>
#include <IrcSession>
#include <QTextEdit>
#include <QStringBuilder>
#include <QList>


class Channel //: public QTextEdit
{
   //Q_OBJECT
public:
    //Channel(QWidget * parent){this->setParent(parent);}
    Channel(QString name, QString Topic,  QList<QString> users);
private :
    QString Name;
    QString Topic;
    QList<QString> users;
    //int index;
    QTextEdit *myNavTab;

   public :
    //int getIndex() {return this->index;}
    //void setIndex(int i){this->index = i;}

    void setMyNavTab(QTextEdit * t){this->myNavTab = t;}
    QTextEdit * getMyNavTav(){return this->myNavTab;}

    void setName(QString & Name){this->Name = Name;}
    QString & getName (){return this->Name;}

    void setTopic(QString Topic){this->Topic = Topic;}
    QString & getTopic(){return this->Topic;}

    QList<QString> & getUsers() {return this->users;}
    void setUsers(QList<QString> & users){this->users = users;}
};

#endif // CHANNEL_H
