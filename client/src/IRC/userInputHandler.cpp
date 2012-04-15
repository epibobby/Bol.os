#include <QDateTime>
#include "userInputHandler.h"


UserInputHandler::UserInputHandler(WindowController *parent =0)
{
    if (parseFunctions.isEmpty())
    {
        //parseFunctions.insert("AWAY", &UserInputHandler::parseAway);
        //parseFunctions.insert("INVITE", &UserInputHandler::parseInvite);
          parseFunctions["JOIN"] = &UserInputHandler::parseJoin;
//        parseFunctions.insert("KICK", &UserInputHandler::parseKick);
//        parseFunctions.insert("ME", &UserInputHandler::parseMe);
//        parseFunctions.insert("MODE", &UserInputHandler::parseMode);
//        parseFunctions.insert("NAMES", &UserInputHandler::parseNames);
//        parseFunctions.insert("NICK", &UserInputHandler::parseNick);
//        parseFunctions.insert("NOTICE", &UserInputHandler::parseNotice);
          parseFunctions.insert("PART", &UserInputHandler::parsePart);
//        parseFunctions.insert("PING", &UserInputHandler::parsePing);
          parseFunctions.insert("QUIT", &UserInputHandler::parseQuit);
//        parseFunctions.insert("QUOTE", &UserInputHandler::parseQuote);
//        parseFunctions.insert("TIME", &UserInputHandler::parseTime);
//        parseFunctions.insert("TOPIC", &UserInputHandler::parseTopic);
//        parseFunctions.insert("VERSION", &UserInputHandler::parseVersion);
//        parseFunctions.insert("WHOIS", &UserInputHandler::parseWhois);
//        parseFunctions.insert("WHOWAS", &UserInputHandler::parseWhowas);
    }
    this->myController = parent;
}

void UserInputHandler::parseInput()
{
    if (myController->getActiveChan() != NULL)
        parseInput(myController->getActiveChan()->getName());
    else
        parseInput(tr(""));



   QTabWidget *navTab = myController->getNavTab();
   ((QTextEdit*)(navTab->currentWidget()))->append(this->myController->getUserInputEditor()->text());


    this->myController->getUserInputEditor()->clear();
}

void UserInputHandler::parseInput(QString channel)
{
    stringCommand = myController->getUserInputEditor()->text();
    qDebug() << stringCommand;
    if(stringCommand[0] == '/')
    {
        // parse the input.
        const QStringList words = stringCommand.mid(1).split(" ", QString::SkipEmptyParts);
        const QString commandString = words.value(0).toUpper();
        ParseFunc parseFunc = parseFunctions.value(commandString);
        if (parseFunc)
        {
            command = (this->*parseFunc)(channel, words.mid(1));
            if (!command)
            {
                //emit outputString(this->host(), tr("Unable to understand command!"));
                return;
            }
        }
    }
    else
    {
        command = IrcCommand::createMessage(channel, stringCommand);
    }

    qDebug() << "before sendcommand";
    MySession* session =  myController->getSession();
    if(session->isConnected())
        qDebug() << "session connectée";
    if (session->isActive())
        qDebug() << "session is active";

    if (myController->getSession()->sendCommand(command))
        qDebug() << "good";
    //else
      //  myController;
//qDebug() << "after sendcommand";

}


IrcCommand* UserInputHandler::parseAway(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    return IrcCommand::createAway(params.value(0));
}

IrcCommand* UserInputHandler::parseInvite(const QString& channel, const QStringList& params)
{
    if (params.count() == 1)
        return IrcCommand::createInvite(params.at(0), channel);
    return 0;
}

IrcCommand* UserInputHandler::parseJoin(const QString& channel, const QStringList& params)
{
    if (params.count() == 1 || params.count() == 2)
    {
        //creation du channel
        QList<QString>* users = new QList<QString>;
        QString * theTopic = new QString("the topic.");
        QString * toto = new QString(params.at(0));
        myController->getMyChannels()->append(Channel(*toto, *theTopic, *users));
       //creation d'une tab "channel"  pui sajout dans navTab
       QTextEdit *theChanTab = new QTextEdit(myController->getNavTab());
       myController->setActiveChan(params.at(0));
       myController->addTabToNavTab(theChanTab,params.at(0));
       myController->getNavTab()->setCurrentWidget(theChanTab);
       return IrcCommand::createJoin(params.at(0));
    }
        return 0;
}

IrcCommand* UserInputHandler::parseKick(const QString& channel, const QStringList& params)
{
    if (params.count() >= 1)
        return IrcCommand::createKick(channel, params.at(0), QStringList(params.mid(1)).join(" "));
    return 0;
}

IrcCommand* UserInputHandler::parseMe(const QString& channel, const QStringList& params)
{
    if (!params.isEmpty())
        return IrcCommand::createCtcpAction(channel, params.join(" "));
    return 0;
}

IrcCommand* UserInputHandler::parseMode(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    if (params.count() >= 2 && params.count() <= 4)
        return IrcCommand::createMode(params.at(0), params.at(1), params.value(2));
    return 0;
}

IrcCommand* UserInputHandler::parseNames(const QString& channel, const QStringList& params)
{
    if (params.isEmpty())
        return IrcCommand::createNames(channel);
    return 0;
}

IrcCommand* UserInputHandler::parseNick(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    if (params.count() == 1)
        return IrcCommand::createNick(params.at(0));
    return 0;
}

IrcCommand* UserInputHandler::parseNotice(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    if (params.count() >= 2)
        return IrcCommand::createNotice(params.at(0), QStringList(params.mid(1)).join(" "));
    return 0;
}

IrcCommand* UserInputHandler::parsePart(const QString& channel, const QStringList& params)
{
    return IrcCommand::createPart(channel, params.join(" "));
}

IrcCommand* UserInputHandler::parsePing(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    QString time = QString::number(QDateTime::currentDateTime().toTime_t());
    if (params.isEmpty())
        return IrcCommand::createQuote(QStringList() << "PING" << time);
    return IrcCommand::createCtcpRequest(params.at(0), "PING " + time);
}

IrcCommand* UserInputHandler::parseQuit(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    return IrcCommand::createQuit(params.join(" "));
}

IrcCommand* UserInputHandler::parseQuote(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    return IrcCommand::createQuote(params);
}

IrcCommand* UserInputHandler::parseTime(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    if (params.isEmpty())
        return IrcCommand::createQuote(QStringList() << "TIME");
    return IrcCommand::createCtcpRequest(params.at(0), "TIME");
}

IrcCommand* UserInputHandler::parseTopic(const QString& channel, const QStringList& params)
{
    return IrcCommand::createTopic(channel, params.join(" "));
}

IrcCommand* UserInputHandler::parseVersion(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    if (params.isEmpty())
        return IrcCommand::createQuote(QStringList() << "VERSION");
    return IrcCommand::createCtcpRequest(params.at(0), "VERSION");
}

IrcCommand* UserInputHandler::parseWhois(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    if (params.count() == 1)
        return IrcCommand::createWhois(params.at(0));
    return 0;
}

IrcCommand* UserInputHandler::parseWhowas(const QString& channel, const QStringList& params)
{
    Q_UNUSED(channel);
    if (params.count() == 1)
        return IrcCommand::createWhowas(params.at(0));
    return 0;
}

