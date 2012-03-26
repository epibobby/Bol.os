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

INCLUDEPATH += $$PWD/../../Work/utils/src
DEPENDPATH += $$PWD/../../Work/utils/src

unix:!macx:!symbian|win32: LIBS += -L$$PWD/../../Work/utils/lib/ -lqjson0

INCLUDEPATH += $$PWD/../../Work/utils/include
DEPENDPATH += $$PWD/../../Work/utils/include

win32: PRE_TARGETDEPS += $$PWD/../../Work/utils/lib/qjson0.lib
else:unix:!macx:!symbian: PRE_TARGETDEPS += $$PWD/../../Work/utils/lib/libqjson0.a
