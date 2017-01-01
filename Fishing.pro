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
    src/globaldatabase.cpp \
    src/fishstructs.cpp

HEADERS  += \
    include/game/gameengine.hpp \
    include/game/globalsettings.hpp \
    include/game/View/welcomeview.hpp \
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
    include/game/suitcase.hpp \
    include/game/Exceptions/gameexception.hpp \
    include/game/Exceptions/fatalexception.hpp \
    include/game/Exceptions/badchoiceexception.hpp \
    include/game/Exceptions/notenoughexception.hpp \
    include/game/Exceptions/incorrectexception.hpp \
    include/game/Exceptions/notselectedexception.hpp \
    include/game/globaldatabase.hpp \
    include/game/common/catchtypes.hpp \
    include/game/common/common.hpp \
    include/game/common/daytimes.hpp \
    include/game/common/tables.hpp \
    include/game/Items/bait.hpp \
    include/game/Items/hook.hpp \
    include/game/Items/line.hpp \
    include/game/Items/reel.hpp \
    include/game/Items/rod.hpp \
    include/game/Items/spinning.hpp \
    include/game/Items/spoon.hpp \
    include/game/Interfaces/ibasiccatch.hpp \
    include/game/Interfaces/ifishingrod.hpp \
    include/game/Interfaces/iformbase.hpp \
    include/game/Interfaces/igameitem.hpp \
    include/game/Interfaces/ihook.hpp \
    include/game/World/gameworld.hpp \
    include/game/World/location.hpp \
    include/game/World/place.hpp

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
