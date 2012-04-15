#-------------------------------------------------
#
# Project created by QtCreator 2012-02-04T15:37:40
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += opengl
QT       += phonon
QT       += xml
QT       += script

CONFIG   += console
CONFIG   -= app_bundle

TARGET = GUI
TEMPLATE = app

 RESOURCES += mediaplayer.qrc

 !win32:CONFIG += CONSOLE


SOURCES += main.cpp\
        logonwindow.cpp \
    connectionsettings.cpp \
    createcount.cpp \
    alert.cpp \
    mainwindow.cpp \
    lmc.cpp \
    clientconnection.cpp \
    protocoleclient.cpp \
    mediaplayer.cpp \
    autoshutdown.cpp \
    myglwidget.cpp \
    mywindow.cpp \
    stackedwidgetmovienews.cpp \
    ../API/apimovie.cpp \
    ../API/jsonparser.cpp \
    searchwidget.cpp \
    listmovies.cpp \
    library.cpp \
    createlibrary.cpp \
    ../IRC/userInputHandler.cpp \
    ../IRC/sessionWrapper.cpp \
    ../IRC/mySession.cpp \
    ../IRC/myirc.cpp \
    ../IRC/mainwindowcontroller.cpp \
    ../IRC/channel.cpp

HEADERS  += logonwindow.h \
    connectionsettings.h \
    createcount.h \
    alert.h \
    mainwindow.h \
    lmc.h \
    clientconnection.h \
    protocoleclient.h \
    mediaplayer.h \
    autoshutdown.h \
    myglwidget.h \
    mywindow.h \
    stackedwidgetmovienews.h \
    mainwindow.h \
    ../API/jsonparser.h \
    ../API/apimovie.h \
    searchwidget.h \
    listmovies.h \
    library.h \
    createlibrary.h \
    ../IRC/userInputHandler.h \
    ../IRC/sessionWrapper.h \
    ../IRC/mySession.h \
    ../IRC/myirc.h \
    ../IRC/mainwindowcontroller.h \
    ../IRC/channel.h

FORMS    += logonwindow.ui \
    connectionsettings.ui \
    createcount.ui \
    alert.ui \
    mainwindow.ui \
    settings.ui \
    autoshutdown.ui \
    stackedwidgetmovienews.ui \
    searchwidget.ui \
    listmovies.ui \
    library.ui \
    createlibrary.ui

 wince*{
 DEPLOYMENT_PLUGIN += phonon_ds9 phonon_waveout
 }

 symbian {
     TARGET.UID3 = 0xA000C613

      addFiles.files = ../embedded/desktopservices/data/sax.mp3
      addFiles.path = /data/sounds/
      DEPLOYMENT += addFiles

     include($$QT_SOURCE_TREE/demos/symbianpkgrules.pri)

         LIBS += -lcommdb

     TARGET.CAPABILITY="NetworkServices"
 }

OTHER_FILES += \
    images/screen.png \
    ../API/ApiMovie.pro.user


INCLUDEPATH += $$PWD/../utils/src
DEPENDPATH += $$PWD/../utils/src

unix:!macx:!symbian|win32: LIBS += -L$$PWD/../utils/lib/ -lqjson0

INCLUDEPATH += $$PWD/../utils/include
DEPENDPATH += $$PWD/../utils/include

win32: PRE_TARGETDEPS += $$PWD/../utils/lib/qjson0.lib
else:unix:!macx:!symbian: PRE_TARGETDEPS += $$PWD/../utils/lib/libqjson0.a


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../communi/lib/ -lCommuni
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../communi/lib/ -lCommunid
else:symbian: LIBS += -lCommuni
else:unix: LIBS += -L$$PWD/../communi/lib/ -lCommuni

INCLUDEPATH += $$PWD/../communi/include
DEPENDPATH += $$PWD/../communi/include
DEFINES += COMMUNI_SHARED



