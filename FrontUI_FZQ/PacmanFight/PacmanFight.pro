######################################################################
# Automatically generated by qmake (3.1) Thu Jun 1 22:25:05 2023
######################################################################

TEMPLATE = app
TARGET = PacmanFight
INCLUDEPATH += .

# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += game.h \
           gameabstractobject.h \
           mainwindow.h \
           settingpage.h \
           ui_game.h \
           ui_mainwindow.h \
           ui_settingpage.h
FORMS += game.ui mainwindow.ui settingpage.ui
SOURCES += game.cpp \
           gameabstractobject.cpp \
           main.cpp \
           mainwindow.cpp \
           settingpage.cpp
RESOURCES += resources.qrc

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
