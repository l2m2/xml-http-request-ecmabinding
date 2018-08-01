#-------------------------------------------------
#
# Project created by QtCreator 2016-11-24T11:45:43
#
#-------------------------------------------------

QT       -= gui
QT       += script network

CONFIG   += c++11

TARGET = $$qtLibraryTarget(ecma_xmlhttprequest)
TEMPLATE = lib

DEFINES += ECMABINDING_LIBRARY

SOURCES += xmlhttprequest_ecmabing.cpp \
    xmlhttprequestecmaplugin.cpp

HEADERS += xmlhttprequest_ecmabing.h \
    xmlhttprequestecmaplugin.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../xmlhttprequest/release/ -lxmlhttprequest
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../xmlhttprequest/debug/ -lxmlhttprequest
else:unix:!macx: LIBS += -L$$OUT_PWD/../xmlhttprequest/ -lxmlhttprequest

INCLUDEPATH += $$PWD/../xmlhttprequest
DEPENDPATH += $$PWD/../xmlhttprequest
