#-------------------------------------------------
#
# Project created by QtCreator 2016-12-29T22:10:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = Fishing
TEMPLATE = app


SOURCES += main.cpp \
    src/gameengine.cpp \
    src/iformbase.cpp \
    src/welcomeview.cpp \
    src/fishdatabase.cpp \
    src/ibasiccatch.cpp \
    src/fish.cpp \
    src/gameworld.cpp \
    src/location.cpp \
    src/place.cpp \
    src/player.cpp \
    src/bag.cpp \
    src/welcomemodel.cpp \
    src/welcomecontroller.cpp \
    src/playerstats.cpp

HEADERS  += \
    include/game/fishspeed.hpp \
    include/game/daytimes.hpp \
    include/game/common.hpp \
    include/game/fishactions.hpp \
    include/game/fishdatabase.hpp \
    include/game/fishsizes.hpp \
    include/game/fishfrequency.hpp \
    include/game/fishstructs.hpp \
    include/game/gameengine.hpp \
    include/game/globalsettings.hpp \
    include/game/tables.hpp \
    include/game/iformbase.hpp \
    include/game/View/welcomeview.hpp \
    include/game/ibasiccatch.hpp \
    include/game/catchtypes.hpp \
    include/game/fish.h \
    include/game/gameworld.hpp \
    include/game/location.hpp \
    include/game/place.hpp \
    include/game/player.hpp \
    include/game/bag.hpp \
    include/game/Model/welcomemodel.hpp \
    include/game/Controller/welcomecontroller.hpp \
    include/game/playerstats.hpp

INCLUDEPATH += include

FORMS += \
    welcomeview.ui
