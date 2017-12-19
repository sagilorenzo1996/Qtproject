#-------------------------------------------------
#
# Project created by QtCreator 2017-12-05T12:10:27
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AsteroidBuster2
TEMPLATE = app


SOURCES += main.cpp \
    player.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    score.cpp \
    menu.cpp

HEADERS  += \
    player.h \
    bullet.h \
    enemy.h \
    game.h \
    score.h \
    menu.h

FORMS    +=

RESOURCES += \
    resources.qrc
