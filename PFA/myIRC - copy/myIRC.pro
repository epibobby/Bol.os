#-------------------------------------------------
#
# Project created by QtCreator 2012-02-23T11:53:13
#
#-------------------------------------------------

QT       += core gui

TARGET = myIRC
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mySession.cpp \
    userInputHandler.cpp \
    mainwindowcontroller.cpp \
    myirc.cpp \
    channel.cpp

HEADERS  += mainwindow.h \
    mySession.h \
    userInputHandler.h \
    mainwindowcontroller.h \
    myirc.h \
    channel.h

FORMS    += mainwindow.ui
win32:CONFIG(release, debug|release): LIBS += -LC:\Users\matthieu\Desktop\Work\communi\lib  -lCommunid
else:win32:CONFIG(debug, debug|release): LIBS += -LC:\Users\matthieu\Desktop\Work\communi\lib -lCommunid
else:symbian: LIBS += -lCommuni
else:unix: LIBS += -LC:\Users\matthieu\Desktop\Work\communi\include -lCommuni

INCLUDEPATH += $$PWD/../communi/include
DEPENDPATH += $$PWD/../communi/include

DEFINES += COMMUNI_SHARED










