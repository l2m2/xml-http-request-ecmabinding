#-------------------------------------------------
#
# Project created by QtCreator 2016-11-24T11:44:10
#
#-------------------------------------------------

QT       -= gui
QT       += network script

TARGET = $$qtLibraryTarget(xmlhttprequest)
TEMPLATE = lib

DEFINES += XMLHTTPREQUEST_LIBRARY

SOURCES += xmlhttprequestclass.cpp

HEADERS += xmlhttprequestclass.h\
        xmlhttprequest_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
