#-------------------------------------------------
#
# Project created by QtCreator 2013-03-13T11:12:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app

INCLUDEPATH = /usr/include/mysql
QMAKE_LIBDIR_X11 += -/usr/lib
QMAKE_LIBDIR_X11 += /usr/lib/mysql
QMAKE_LIBS_X11 += -lmysqlclient

SOURCES +=\
        mainwindow.cpp \
    server_db.cpp \
    daily.cpp \
    server.cpp \
    comm_sock_imp.cpp

HEADERS  += mainwindow.h \
    server_db.h \
    model.h \
    comm.h \
    daily.h \
    server.h


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/release/ -lmysqlclient
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/debug/ -lmysqlclient
else:unix: LIBS += -L$$PWD/../../../../../usr/lib/x86_64-linux-gnu/ -lmysqlclient

INCLUDEPATH += $$PWD/../../../../../usr/lib
DEPENDPATH += $$PWD/../../../../../usr/lib

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/release/mysqlclient.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/debug/mysqlclient.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../../../usr/lib/x86_64-linux-gnu/libmysqlclient.a
