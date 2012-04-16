#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <QObject>
#include <IrcCommand>
class MyIRC;
class WindowController;
#include "myirc.h"


class UserInputHandler : public QObject
{
   Q_OBJECT
public :
    UserInputHandler();
    UserInputHandler(WindowController *);
    ~UserInputHandler(){}

private :
    //typedef IrcCommand*(*ParseFunc)(const QString&, const QStringList&);
    typedef IrcCommand* (UserInputHandler::*ParseFunc)(const QString&, const QStringList&);
     QMap<QString, ParseFunc> parseFunctions;
    WindowController *myController;
    QString stringCommand;
    IrcCommand *command;

     IrcCommand* parseAway(const QString& channel, const QStringList& params);
      IrcCommand* parseInvite(const QString& channel, const QStringList& params);
      IrcCommand* parseJoin(const QString& channel, const QStringList& params);
      IrcCommand* parseKick(const QString& channel, const QStringList& params);
      IrcCommand* parseMe(const QString& channel, const QStringList& params);
      IrcCommand* parseMode(const QString& channel, const QStringList& params);
      IrcCommand* parseNames(const QString& channel, const QStringList& params);
      IrcCommand* parseNick(const QString& channel, const QStringList& params);
      IrcCommand* parseNotice(const QString& channel, const QStringList& params);
      IrcCommand* parsePart(const QString& channel, const QStringList& params);
      IrcCommand* parsePing(const QString& channel, const QStringList& params);
      IrcCommand* parseQuit(const QString& channel, const QStringList& params);
      IrcCommand* parseQuote(const QString& channel, const QStringList& params);
      IrcCommand* parseTime(const QString& channel, const QStringList& params);
      IrcCommand* parseTopic(const QString& channel, const QStringList& params);
      IrcCommand* parseVersion(const QString& channel, const QStringList& params);
      IrcCommand* parseWhois(const QString& channel, const QStringList& params);
      IrcCommand* parseWhowas(const QString& channel, const QStringList& params);
      IrcCommand* createChan(QString);


public slots :
    void parseInput(QString channel);
    void parseInput();
};

#endif // INPUTHANDLER_H
