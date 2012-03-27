/*
* Copyright (C) 2008-2011 J-P Nurmi jpnurmi@gmail.com
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*/

#include "messageformatter.h"
#include <ircsender.h>
#include <ircutil.h>
#include <irc.h>
#include <QHash>
#include <QTime>
#include <QColor>

static bool nameLessThan(const QString &n1, const QString &n2)
{
    const bool o1 = n1.startsWith("@");
    const bool o2 = n2.startsWith("@");

    if (o1 && !o2)
        return true;
    if (!o1 && o2)
        return false;

    const bool v1 = n1.startsWith("+");
    const bool v2 = n2.startsWith("+");

    if (v1 && !v2 && !o2)
        return true;
    if (!v1 && !o1 && v2)
        return false;

    return QString::localeAwareCompare(n1.toLower(), n2.toLower()) < 0;
}

MessageFormatter::MessageFormatter(QObject* parent) : QObject(parent)
{
    d.highlight = false;
    d.timeStamp = false;
}

MessageFormatter::~MessageFormatter()
{
}

QStringList MessageFormatter::highlights() const
{
    return d.highlights;
}

void MessageFormatter::setHighlights(const QStringList& highlights)
{
    d.highlights = highlights;
}

bool MessageFormatter::timeStamp() const
{
    return d.timeStamp;
}

void MessageFormatter::setTimeStamp(bool timeStamp)
{
    d.timeStamp = timeStamp;
}

QString MessageFormatter::messageFormat() const
{
    return d.messageFormat;
}

void MessageFormatter::setMessageFormat(const QString& format)
{
    d.messageFormat = format;
}

QString MessageFormatter::eventFormat() const
{
    return d.prefixedFormats.value("!");
}

void MessageFormatter::setEventFormat(const QString& format)
{
    d.prefixedFormats.insert("!", format);
}

QString MessageFormatter::noticeFormat() const
{
    return d.prefixedFormats.value("[");
}

void MessageFormatter::setNoticeFormat(const QString& format)
{
    d.prefixedFormats.insert("[", format);
}

QString MessageFormatter::actionFormat() const
{
    return d.prefixedFormats.value("*");
}

void MessageFormatter::setActionFormat(const QString& format)
{
    d.prefixedFormats.insert("*", format);
}

QString MessageFormatter::unknownFormat() const
{
    return d.prefixedFormats.value("?");
}

void MessageFormatter::setUnknownFormat(const QString& format)
{
    d.prefixedFormats.insert("?", format);
}

QString MessageFormatter::highlightFormat() const
{
    return d.highlightFormat;
}

void MessageFormatter::setHighlightFormat(const QString& format)
{
    d.highlightFormat = format;
}

QStringList MessageFormatter::currentNames() const
{
    qSort(d.names.begin(), d.names.end(), nameLessThan);
    return d.names;
}

QString MessageFormatter::formatMessage(IrcMessage* message) const
{
    QString formatted;
    d.highlight = false;
    switch (message->type())
    {
    case IrcMessage::Invite:
        formatted = formatInviteMessage(static_cast<IrcInviteMessage*>(message));
        break;
    case IrcMessage::Join:
        formatted = formatJoinMessage(static_cast<IrcJoinMessage*>(message));
        break;
    case IrcMessage::Kick:
        formatted = formatKickMessage(static_cast<IrcKickMessage*>(message));
        break;
    case IrcMessage::Mode:
        formatted = formatModeMessage(static_cast<IrcModeMessage*>(message));
        break;
    case IrcMessage::Nick:
        formatted = formatNickMessage(static_cast<IrcNickMessage*>(message));
        break;
    case IrcMessage::Notice:
        formatted = formatNoticeMessage(static_cast<IrcNoticeMessage*>(message));
        break;
    case IrcMessage::Numeric:
        formatted = formatNumericMessage(static_cast<IrcNumericMessage*>(message));
        break;
    case IrcMessage::Part:
        formatted = formatPartMessage(static_cast<IrcPartMessage*>(message));
        break;
    case IrcMessage::Pong:
        formatted = formatPongMessage(static_cast<IrcPongMessage*>(message));
        break;
    case IrcMessage::Private:
        formatted = formatPrivateMessage(static_cast<IrcPrivateMessage*>(message));
        break;
    case IrcMessage::Quit:
        formatted = formatQuitMessage(static_cast<IrcQuitMessage*>(message));
        break;
    case IrcMessage::Topic:
        formatted = formatTopicMessage(static_cast<IrcTopicMessage*>(message));
        break;
    case IrcMessage::Unknown:
        formatted = formatUnknownMessage(static_cast<IrcMessage*>(message));
        break;
    default:
        break;
    }

    if (formatted.isEmpty())
        return QString();

    QString format = d.messageFormat;
    if (d.highlight && !d.highlightFormat.isEmpty())
        format = d.highlightFormat;
    else
        format = d.prefixedFormats.value(formatted.left(1));

    if (d.timeStamp)
        formatted = tr("[%1] %2").arg(QTime::currentTime().toString(), formatted);

    if (!format.isNull())
        formatted = tr("<span %1>%2</span>").arg(format, formatted);

    return formatted;
}

QString MessageFormatter::formatInviteMessage(IrcInviteMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    return tr("! %1 invited to %3").arg(sender, message->channel());
}

QString MessageFormatter::formatJoinMessage(IrcJoinMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    return tr("! %1 joined %2").arg(sender, message->channel());
}

QString MessageFormatter::formatKickMessage(IrcKickMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    const QString user = prettyUser(message->user());
    if (!message->reason().isEmpty())
        return tr("! %1 kicked %2 (%3)").arg(sender, user, message->reason());
    else
        return tr("! %1 kicked %2").arg(sender, user);
}

QString MessageFormatter::formatModeMessage(IrcModeMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    return tr("! %1 sets mode %2 %3").arg(sender, message->mode(), message->argument());
}

QString MessageFormatter::formatNickMessage(IrcNickMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    const QString nick = prettyUser(message->nick());
    return tr("! %1 changed nick to %2").arg(sender, nick);
}

QString MessageFormatter::formatNoticeMessage(IrcNoticeMessage* message) const
{
    if (message->isReply())
    {
        const QStringList params = message->message().split(" ", QString::SkipEmptyParts);
        const QString cmd = params.value(0);
        const QString arg = params.value(1);
        if (cmd.toUpper() == "PING")
            return formatPingReply(message->sender(), arg);
        else if (cmd.toUpper() == "TIME")
            return tr("! %1 time is %2").arg(prettyUser(message->sender()), QStringList(params.mid(1)).join(" "));
        else if (cmd.toUpper() == "VERSION")
            return tr("! %1 version is %2").arg(prettyUser(message->sender()), QStringList(params.mid(1)).join(" "));
    }

    foreach (const QString& hilite, d.highlights)
        if (message->message().contains(hilite))
            d.highlight = true;
    const QString sender = prettyUser(message->sender());
    const QString msg = IrcUtil::messageToHtml(message->message());
    return tr("[%1] %2").arg(sender, msg);
}

#define P_(x) message->parameters().value(x)
#define MID_(x) QStringList(message->parameters().mid(x)).join(" ")

QString MessageFormatter::formatNumericMessage(IrcNumericMessage* message) const
{
    if (message->code() < 300)
        return tr("[INFO] %1").arg(IrcUtil::messageToHtml(MID_(1)));
    if (QByteArray(Irc::toString(message->code())).startsWith("ERR_"))
        return tr("[ERROR] %1").arg(IrcUtil::messageToHtml(MID_(1)));

    switch (message->code())
    {
    case Irc::RPL_MOTDSTART:
    case Irc::RPL_MOTD:
        return tr("[MOTD] %1").arg(IrcUtil::messageToHtml(MID_(1)));
    case Irc::RPL_AWAY:
        return tr("! %1 is away (%2)").arg(P_(1), MID_(2));
    case Irc::RPL_ENDOFWHOIS:
        return QString();
    case Irc::RPL_WHOISOPERATOR:
    case Irc::RPL_WHOISHELPOP: // "is available for help"
    case Irc::RPL_WHOISSPECIAL: // "is identified to services"
    case Irc::RPL_WHOISSECURE: // nick is using a secure connection
    case Irc::RPL_WHOISHOST: // nick is connecting from <...>
        return tr("! %1").arg(MID_(1));
    case Irc::RPL_WHOISUSER:
        return tr("! %1 is %2@%3 (%4)").arg(P_(1), P_(2), P_(3), IrcUtil::messageToHtml(MID_(5)));
    case Irc::RPL_WHOISSERVER:
        return tr("! %1 is online via %2 (%3)").arg(P_(1), P_(2), P_(3));
    case Irc::RPL_WHOISACCOUNT: // nick user is logged in as
        return tr("! %1 %3 %2").arg(P_(1), P_(2), P_(3));
    case Irc::RPL_WHOWASUSER:
        return tr("! %1 was %2@%3 %4 %5").arg(P_(1), P_(2), P_(3), P_(4), P_(5));
    case Irc::RPL_WHOISIDLE: {
        QDateTime signon = QDateTime::fromTime_t(P_(3).toInt());
        QTime idle = QTime().addSecs(P_(2).toInt());
        return tr("! %1 has been online since %2 (idle for %3)").arg(P_(1), signon.toString(), idle.toString());
    }
    case Irc::RPL_WHOISCHANNELS:
        return tr("! %1 is on channels %2").arg(P_(1), P_(2));
    case Irc::RPL_CHANNELMODEIS:
        return tr("! %1 mode is %2").arg(P_(1), P_(2));
    case Irc::RPL_CHANNEL_URL:
        return tr("! %1 url is %2").arg(P_(1), IrcUtil::messageToHtml(P_(2)));
    case Irc::RPL_CREATIONTIME: {
        QDateTime dateTime = QDateTime::fromTime_t(P_(2).toInt());
        return tr("! %1 was created %2").arg(P_(1), dateTime.toString());
    }
    case Irc::RPL_NOTOPIC:
        return tr("! %1 has no topic set").arg(P_(1));
    case Irc::RPL_TOPIC:
        return tr("! %1 topic is \"%2\"").arg(P_(1), IrcUtil::messageToHtml(P_(2)));
    case Irc::RPL_TOPICWHOTIME: {
        QDateTime dateTime = QDateTime::fromTime_t(P_(3).toInt());
        return tr("! %1 topic was set %2 by %3").arg(P_(1), dateTime.toString(), P_(2));
    }
    case Irc::RPL_INVITING:
        return tr("! inviting %1 to %2").arg(prettyUser(P_(1)), P_(2));
    case Irc::RPL_VERSION:
        return tr("! %1 version is %2").arg(prettyUser(message->sender()), P_(1));
    case Irc::RPL_TIME:
        return tr("! %1 time is %2").arg(prettyUser(P_(1)), P_(2));
    case Irc::RPL_UNAWAY:
    case Irc::RPL_NOWAWAY:
        return tr("! %1").arg(P_(1));

    case Irc::RPL_NAMREPLY:
        foreach (const QString& name, P_(3).split(" ", QString::SkipEmptyParts))
            d.names.append(name);
        return QString();

    case Irc::RPL_ENDOFNAMES: {
        QString msg = tr("! %1 has %2 users").arg(P_(1)).arg(d.names.count());
        d.names.clear();
        return msg;
    }

    default:
        return tr("[%1] %2").arg(message->code()).arg(QStringList(message->parameters().mid(1)).join(" "));
    }
}

QString MessageFormatter::formatPartMessage(IrcPartMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    if (!message->reason().isEmpty())
        return tr("! %1 parted %2 (%3)").arg(sender, message->channel(), IrcUtil::messageToHtml(message->reason()));
    else
        return tr("! %1 parted %2").arg(sender, message->channel());
}

QString MessageFormatter::formatPongMessage(IrcPongMessage* message) const
{
    return formatPingReply(message->sender(), message->argument());
}

QString MessageFormatter::formatPrivateMessage(IrcPrivateMessage* message) const
{
    foreach (const QString& hilite, d.highlights)
        if (message->message().contains(hilite))
            d.highlight = true;
    const QString sender = prettyUser(message->sender());
    const QString msg = IrcUtil::messageToHtml(message->message());
    if (message->isAction())
        return tr("* %1 %2").arg(sender, msg);
    else if (message->isRequest())
        return tr("! %1 requested %2").arg(sender, msg.split(" ").value(0).toLower());
    else
        return tr("&lt;%1&gt; %2").arg(sender, msg);
}

QString MessageFormatter::formatQuitMessage(IrcQuitMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    if (!message->reason().isEmpty())
        return tr("! %1 has quit (%2)").arg(sender, IrcUtil::messageToHtml(message->reason()));
    else
        return tr("! %1 has quit").arg(sender);
}

QString MessageFormatter::formatTopicMessage(IrcTopicMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    const QString topic = IrcUtil::messageToHtml(message->topic());
    return tr("! %1 sets topic \"%2\" on %3").arg(sender, topic, message->channel());
}

QString MessageFormatter::formatUnknownMessage(IrcMessage* message) const
{
    const QString sender = prettyUser(message->sender());
    return tr("? %1 %2 %3").arg(sender, message->command(), message->parameters().join(" "));
}

QString MessageFormatter::formatPingReply(const IrcSender& sender, const QString& arg)
{
    bool ok;
    int seconds = arg.toInt(&ok);
    if (ok)
    {
        QDateTime time = QDateTime::fromTime_t(seconds);
        QString result = QString::number(time.secsTo(QDateTime::currentDateTime()));
        return tr("! %1 replied in %2s").arg(prettyUser(sender), result);
    }
    return QString();
}

QString MessageFormatter::prettyUser(const IrcSender& sender)
{
    const QString name = sender.name();
    if (sender.isValid())
        return colorize(name);
    return name;
}

QString MessageFormatter::prettyUser(const QString& user)
{
    return prettyUser(IrcSender(user));
}

QString MessageFormatter::colorize(const QString& str)
{
    QColor color = QColor::fromHsl(qHash(str) % 359, 255, 64);
    return QString("<span style='color:%1'>%2</span>").arg(color.name()).arg(str);
}
