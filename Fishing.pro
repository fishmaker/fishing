#-------------------------------------------------
#
# Project created by QtCreator 2016-12-29T22:10:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++14

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
    src/playerstats.cpp \
    src/lobbyview.cpp \
    src/shopview.cpp \
    src/sellfishview.cpp \
    src/selectplaceview.cpp \
    src/travelview.cpp \
    src/fishingview.cpp \
    src/ifishingrod.cpp \
    src/igameitem.cpp \
    src/suitcase.cpp \
    src/gameexception.cpp \
    src/fatalexception.cpp \
    src/badchoiceexception.cpp \
    src/notenoughexception.cpp \
    src/incorrectexception.cpp \
    src/notselectedexception.cpp \
    src/rod.cpp \
    src/spinning.cpp \
    src/reel.cpp \
    src/bait.cpp \
    src/line.cpp \
    src/ihook.cpp \
    src/hook.cpp \
    src/spoon.cpp \
    src/globaldatabase.cpp

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
    include/game/gameworld.hpp \
    include/game/location.hpp \
    include/game/place.hpp \
    include/game/player.hpp \
    include/game/bag.hpp \
    include/game/Model/welcomemodel.hpp \
    include/game/Controller/welcomecontroller.hpp \
    include/game/playerstats.hpp \
    include/game/View/lobbyview.hpp \
    include/game/View/shopview.hpp \
    include/game/View/sellfishview.hpp \
    include/game/View/selectplaceview.hpp \
    include/game/View/travelview.hpp \
    include/game/View/fishingview.hpp \
    include/game/fish.hpp \
    include/game/ifishingrod.hpp \
    include/game/igameitem.hpp \
    include/game/suitcase.hpp \
    include/game/Exceptions/gameexception.hpp \
    include/game/Exceptions/fatalexception.hpp \
    include/game/Exceptions/badchoiceexception.hpp \
    include/game/Exceptions/notenoughexception.hpp \
    include/game/Exceptions/incorrectexception.hpp \
    include/game/Exceptions/notselectedexception.hpp \
    include/game/rod.hpp \
    include/game/spinning.hpp \
    include/game/reel.hpp \
    include/game/bait.hpp \
    include/game/line.hpp \
    include/game/ihook.hpp \
    include/game/hook.hpp \
    include/game/spoon.hpp \
    include/game/globaldatabase.hpp

INCLUDEPATH += include

FORMS += \
    welcomeview.ui \
    lobbyview.ui \
    shopview.ui \
    sellfishview.ui \
    selectplaceview.ui \
    travelview.ui \
    fishingview.ui

RESOURCES += \
    resources.qrc
