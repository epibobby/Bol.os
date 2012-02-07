#-------------------------------------------------
#
# Project created by QtCreator 2012-02-07T14:15:38
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = Server
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    server.cpp \
    client.cpp

HEADERS += \
    server.h \
    client.h
