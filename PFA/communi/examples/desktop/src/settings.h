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

#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMap>
#include <QHash>
#include <QFont>
#include <QVariant>
#include <QMetaType>
#include "streamer.h"

struct Settings
{
    Settings();
    operator QVariant() const;
    bool operator==(const Settings& other) const;
    bool operator!=(const Settings& other) const;

    enum MessageType
    {
        Joins,
        Parts,
        Nicks,
        Modes,
        Kicks,
        Quits,
        Topics
    };

    enum ColorType
    {
        Background,
        Message,
        Event,
        Notice,
        Action,
        Highlight
    };

    enum ShortcutType
    {
        TabUp,
        TabDown,
        TabLeft,
        TabRight
    };

    QHash<int, bool> messages;
    QHash<int, bool> highlights;
    QHash<int, QString> colors;
    QHash<int, QString> shortcuts;
    QString language;
    QFont font;
    int maxBlockCount;
    bool timeStamp;
};
Q_DECLARE_METATYPE(Settings);

inline QDataStream& operator<<(QDataStream& out, const Settings& settings)
{
    out << settings.messages;
    out << settings.highlights;
    out << settings.language;
    out << settings.font;
    out << settings.colors;
    out << settings.shortcuts;
    out << settings.maxBlockCount;
    out << settings.timeStamp;
    return out;
}

inline QDataStream& operator>>(QDataStream& in, Settings& settings)
{
    settings.messages = readStreamValue< QHash<int, bool> >(in, settings.messages);
    settings.highlights = readStreamValue< QHash<int, bool> >(in, settings.highlights);
    settings.language = readStreamValue<QString>(in, settings.language);
    settings.font = readStreamValue<QFont>(in, settings.font);
    settings.colors = readStreamValue< QHash<int, QString> >(in, settings.colors);
    settings.shortcuts = readStreamValue< QHash<int, QString> >(in, settings.shortcuts);
    settings.maxBlockCount = readStreamValue<int>(in, settings.maxBlockCount);
    settings.timeStamp = readStreamValue<bool>(in, settings.timeStamp);
    return in;
}

#endif // SETTINGS_H
