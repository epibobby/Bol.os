#-------------------------------------------------
#
# Project created by QtCreator 2011-09-20T12:33:14
#
#-------------------------------------------------

 TARGET = Client
 TEMPLATE = app
 FORMS    += client.ui
 HEADERS       = client.h
 SOURCES       = client.cpp \
                 main.cpp
 QT           += network
 QT           += core gui
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

