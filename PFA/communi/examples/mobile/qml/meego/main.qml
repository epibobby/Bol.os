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

import QtQuick 1.1
import Communi 1.0
import com.nokia.meego 1.0

PageStackWindow {
    id: window

    initialPage: MainPage {
        id: page

        title: {
            if (connectionSheet.status === DialogStatus.Open)
                return qsTr("Add connection");
            if (channelSheet.status === DialogStatus.Open)
                return qsTr("Join channel");
            if (querySheet.status === DialogStatus.Open)
                return qsTr("Open query");
            return qsTr("Communi");
        }

        tools: ToolBarLayout {
            id: tools
            visible: sheet.status == DialogStatus.Closed
            ToolIcon {
                iconId: "toolbar-add"
                anchors.right: parent.right
                onClicked: SessionModel.length ? menu.open() : connectionSheet.open()
            }
        }
        obscured: connectionSheet.status == DialogStatus.Open || connectionSheet.status == DialogStatus.Opening
                  || channelSheet.status !== DialogStatus.Closed || channelSheet.status == DialogStatus.Opening
                  || querySheet.status !== DialogStatus.Closed || querySheet.status == DialogStatus.Opening

        Menu {
            id: menu
            MenuLayout {
                MenuItem {
                    text: qsTr("Add connection")
                    onClicked: connectionSheet.open()
                }
                MenuItem {
                    text: qsTr("Join channel")
                    onClicked: channelSheet.open()
                }
                MenuItem {
                    text: qsTr("Open query")
                    onClicked: querySheet.open()
                }
            }
        }

        IrcCommand {
            id: ircCommand
        }

        ConnectionSheet {
            id: connectionSheet

            Component.onCompleted: {
                connectionSheet.host = Settings.host;
                connectionSheet.port = Settings.port;
                connectionSheet.name = Settings.name;
                connectionSheet.user = Settings.user;
                connectionSheet.real = Settings.real;
                connectionSheet.channel = Settings.channel;
                connectionSheet.secure = Settings.secure;
            }

            Component {
                id: sessionComponent
                Session { }
            }

            onAccepted: {
                var session = sessionComponent.createObject(window);
                session.nickName = connectionSheet.name;
                session.userName = connectionSheet.user.length ? connectionSheet.user : "communi";
                session.realName = connectionSheet.real.length ? connectionSheet.real : connectionSheet.name;
                session.host = connectionSheet.host;
                session.port = connectionSheet.port;
                session.password = connectionSheet.password;
                session.secure = connectionSheet.secure;
                session.channels = connectionSheet.channel;
                SessionManager.addSession(session);

                connectionSheet.password = "";
                Settings.host = connectionSheet.host;
                Settings.port = connectionSheet.port;
                Settings.name = connectionSheet.name;
                Settings.user = connectionSheet.user;
                Settings.real = connectionSheet.real;
                Settings.channel = connectionSheet.channel;
                Settings.secure = connectionSheet.secure;
            }
        }

        Connections {
            target: SessionManager
            onChannelKeyRequired: {
                channelSheet.channel = channel;
                channelSheet.passwordRequired = true;
                channelSheet.open();
            }
        }

        ChannelSheet {
            id: channelSheet
            onAccepted: {
                var item = SessionModel[channelSheet.sessionIndex];
                if (item) {
                    var child = item.addChild(channelSheet.channel);
                    var cmd = ircCommand.createJoin(channelSheet.channel, channelSheet.password);
                    page.bouncer.bounce(child, cmd);
                }
            }
        }

        QuerySheet {
            id: querySheet
            onAccepted: {
                var item = SessionModel[querySheet.sessionIndex];
                if (item) {
                    var child = item.addChild(querySheet.name);
                    var cmd = ircCommand.createWhois(querySheet.name);
                    page.bouncer.bounce(child, cmd);
                }
            }
        }
    }

    Component.onCompleted: SessionManager.restore()
    Component.onDestruction: SessionManager.save()
}
