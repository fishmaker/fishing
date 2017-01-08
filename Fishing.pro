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
    src/mediator.cpp \
    src/selectfkview.cpp \
    src/foodview.cpp \
    src/itemsview.cpp \
    src/suitkitview.cpp \
    src/settingsview.cpp \
    src/warningview.cpp \
    src/errorview.cpp \
    src/confirmview.cpp \
    src/newsview.cpp \
    src/blackmarketview.cpp \
    src/bankview.cpp \
    src/hotelview.cpp \
    src/questsview.cpp \
    src/eventview.cpp \
    src/tournamentview.cpp \
    src/playersinfoview.cpp \
    src/fishpondview.cpp \
    src/fishactionsview.cpp \
    src/prohibitionview.cpp \
    src/tabletview.cpp \
    src/fishinggamemodel.cpp \
    src/selectfkcontroller.cpp \
    src/foodcontroller.cpp \
    src/itemscontroller.cpp \
    src/settingscontroller.cpp \
    src/warningcontroller.cpp \
    src/errorcontroller.cpp \
    src/confirmcontroller.cpp \
    src/newscontroller.cpp \
    src/blackmarketcontroller.cpp \
    src/bankcontroller.cpp \
    src/hotelcontroller.cpp \
    src/questscontroller.cpp \
    src/eventscontroller.cpp \
    src/tournamentcontroller.cpp \
    src/playersinfocontroller.cpp \
    src/fishpondcontroller.cpp \
    src/fishactionscontroller.cpp \
    src/prohibitioncontroller.cpp \
    src/tabletcontroller.cpp \
    src/suitkitcontroller.cpp \
    src/graphicsview.cpp

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
    include/game/Items/suitcase.hpp \
    include/game/View/selectfkview.hpp \
    include/game/View/foodview.hpp \
    include/game/View/itemsview.hpp \
    include/game/View/suitkitview.hpp \
    include/game/View/settingsview.hpp \
    include/game/View/warningview.hpp \
    include/game/View/errorview.hpp \
    include/game/View/confirmview.hpp \
    include/game/View/newsview.hpp \
    include/game/View/blackmarketview.hpp \
    include/game/View/bankview.hpp \
    include/game/View/hotelview.hpp \
    include/game/View/questsview.hpp \
    include/game/View/eventview.hpp \
    include/game/View/tournamentview.hpp \
    include/game/View/playersinfoview.hpp \
    include/game/View/fishpondview.hpp \
    include/game/View/fishactionsview.hpp \
    include/game/View/prohibitionview.hpp \
    include/game/View/tabletview.hpp \
    include/game/Model/fishinggamemodel.hpp \
    include/game/Controller/selectfkcontroller.hpp \
    include/game/Controller/foodcontroller.hpp \
    include/game/Controller/itemscontroller.hpp \
    include/game/Controller/settingscontroller.hpp \
    include/game/Controller/warningcontroller.hpp \
    include/game/Controller/errorcontroller.hpp \
    include/game/Controller/confirmcontroller.hpp \
    include/game/Controller/newscontroller.hpp \
    include/game/Controller/blackmarketcontroller.hpp \
    include/game/Controller/bankcontroller.hpp \
    include/game/Controller/hotelcontroller.hpp \
    include/game/Controller/questscontroller.hpp \
    include/game/Controller/eventscontroller.hpp \
    include/game/Controller/tournamentcontroller.hpp \
    include/game/Controller/playersinfocontroller.hpp \
    include/game/Controller/fishpondcontroller.hpp \
    include/game/Controller/fishactionscontroller.hpp \
    include/game/Controller/prohibitioncontroller.hpp \
    include/game/Controller/tabletcontroller.hpp \
    include/game/Controller/suitkitcontroller.hpp \
    include/game/graphicsview.hpp

INCLUDEPATH += include

FORMS +=

RESOURCES += \
    resources.qrc

DISTFILES += \
    TODO
