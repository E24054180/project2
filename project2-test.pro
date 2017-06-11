#-------------------------------------------------
#
# Project created by QtCreator 2017-05-30T22:33:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project2-test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamewindow.cpp \
    collectwindow.cpp \
    otherwindow.cpp \
    giant.cpp \
    witch.cpp \
    archer.cpp \
    prince.cpp \
    endwindow.cpp \
    magic.cpp \
    enemytower_left.cpp \
    ourtower_left.cpp

HEADERS  += mainwindow.h \
    gamewindow.h \
    collectwindow.h \
    otherwindow.h \
    giant.h \
    witch.h \
    archer.h \
    prince.h \
    endwindow.h \
    magic.h \
    ourtower_left.h \
    enemytower_left.h

FORMS    += mainwindow.ui \
    gamewindow.ui \
    collectwindow.ui \
    otherwindow.ui \
    endwindow.ui

RESOURCES += \
    project2-test_res.qrc

DISTFILES +=
