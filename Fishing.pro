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
    src/iformbase.cpp \
    src/welcomeview.cpp \
    src/ibasiccatch.cpp \
    src/fish.cpp \
    src/gameworld.cpp \
    src/location.cpp \
    src/place.cpp \
    src/player.cpp \
    src/bag.cpp \
    src/welcomecontroller.cpp \
    src/playerstats.cpp \
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
    src/fishstructs.cpp \
    src/globalmodel.cpp \
    src/fishingset.cpp \
    src/lobbyview.cpp \
    src/defaultwindow.cpp \
    src/lobbycontroller.cpp \
    src/selectplayerview.cpp \
    src/createplayerview.cpp \
    src/selectplaceview.cpp \
    src/shopview.cpp \
    src/travelview.cpp \
    src/fishinggameview.cpp \
    src/sellfishview.cpp \
    src/selectplayercontroller.cpp \
    src/createplayercontroller.cpp \
    src/selectplacecontroller.cpp \
    src/shopcontroller.cpp \
    src/travelcontroller.cpp \
    src/fishinggamecontroller.cpp \
    src/sellfishcontroller.cpp \
    src/mediator.cpp

HEADERS  += \
    include/game/View/welcomeview.hpp \
    include/game/player.hpp \
    include/game/Controller/welcomecontroller.hpp \
    include/game/playerstats.hpp \
    include/game/fish.hpp \
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
    include/game/World/place.hpp \
    include/game/Model/globalmodel.hpp \
    include/game/Items/fishingset.hpp \
    include/game/View/lobbyview.hpp \
    include/game/View/defaultwindow.hpp \
    include/game/Controller/lobbycontroller.hpp \
    include/game/View/selectplayerview.hpp \
    include/game/View/createplayerview.hpp \
    include/game/View/selectplaceview.hpp \
    include/game/View/shopview.hpp \
    include/game/View/travelview.hpp \
    include/game/View/fishinggameview.hpp \
    include/game/View/sellfishview.hpp \
    include/game/Controller/selectplayercontroller.hpp \
    include/game/Controller/createplayercontroller.hpp \
    include/game/Controller/selectplacecontroller.hpp \
    include/game/Controller/shopcontroller.hpp \
    include/game/Controller/travelcontroller.hpp \
    include/game/Controller/fishinggamecontroller.hpp \
    include/game/Controller/sellfishcontroller.hpp \
    include/game/mediator.hpp \
    include/game/common/globalsettings.hpp \
    include/game/Items/bag.hpp \
    include/game/Items/suitcase.hpp

INCLUDEPATH += include

FORMS +=

RESOURCES += \
    resources.qrc
