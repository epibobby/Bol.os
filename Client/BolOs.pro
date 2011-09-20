#-------------------------------------------------
#
# Project created by QtCreator 2011-09-19T12:29:18
#
#-------------------------------------------------

QT       += core gui
QT           += network

TARGET = BolOs
TEMPLATE = app


SOURCES += main.cpp \
    firstwindow.cpp \
    createcount.cpp \
    mainwindow.cpp

HEADERS  += \
    firstwindow.h \
    createcount.h \
    mainwindow.h

FORMS    += \
    firstwindow.ui \
    createcount.ui \
    mainwindow.ui

OTHER_FILES +=

 # install
 target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
 sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS fortuneclient.pro
 sources.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
 INSTALLS += target sources

 symbian {
     include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
     TARGET.CAPABILITY = "NetworkServices ReadUserData WriteUserData"
     TARGET.EPOCHEAPSIZE = 0x20000 0x2000000
 }







