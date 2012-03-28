######################################################################
# Communi: src.pri
######################################################################

DEPENDPATH += $$PWD
INCLUDEPATH += $$PWD
QMAKE_CLEAN += $$PWD/*~

FORMS += $$PWD/messageview.ui

HEADERS += $$PWD/application.h
HEADERS += $$PWD/homepage.h
HEADERS += $$PWD/lineeditor.h
HEADERS += $$PWD/maintabwidget.h
HEADERS += $$PWD/mainwindow.h
HEADERS += $$PWD/messageview.h
HEADERS += $$PWD/searcheditor.h
HEADERS += $$PWD/sessiontabwidget.h
HEADERS += $$PWD/settings.h

SOURCES += $$PWD/application.cpp
SOURCES += $$PWD/homepage.cpp
SOURCES += $$PWD/lineeditor.cpp
SOURCES += $$PWD/main.cpp
SOURCES += $$PWD/maintabwidget.cpp
SOURCES += $$PWD/mainwindow.cpp
SOURCES += $$PWD/messageview.cpp
SOURCES += $$PWD/searcheditor.cpp
SOURCES += $$PWD/sessiontabwidget.cpp
SOURCES += $$PWD/settings.cpp

include(3rdparty/3rdparty.pri)
include(util/util.pri)
include(wizard/wizard.pri)
