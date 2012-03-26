QT       += core

QT       -= gui
QT       += xml
QT       += network

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    apimovie.cpp \
    jsonparser.cpp

HEADERS += \
    apimovie.h \
    jsonparser.h


unix:!macx:!symbian|win32: LIBS += -L$$PWD/../../../../qjson-build-desktop-Qt_4_8_0_for_Desktop_-_MSVC2010__Qt_SDK__Release/lib/ -lqjson0

INCLUDEPATH += $$PWD/../../../../qjson/src
DEPENDPATH += $$PWD/../../../../qjson/src
