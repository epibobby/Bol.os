#-------------------------------------------------
#
# Project created by QtCreator 2012-02-04T15:37:40
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += opengl
QT       += phonon


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
    stackedwidgetmovienews.cpp

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
    mainwindow.h

FORMS    += logonwindow.ui \
    connectionsettings.ui \
    createcount.ui \
    alert.ui \
    mainwindow.ui \
    settings.ui \
    autoshutdown.ui \
    stackedwidgetmovienews.ui

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
    images/screen.png



































