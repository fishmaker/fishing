#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QtCore>
#include <QObject>
#include <QWidget>

#include "game/player.hpp"
#include "game/View/defaultwindow.hpp"
#include "game/Interfaces/iformbase.hpp"
#include "game/Controller/welcomecontroller.hpp"
#include "game/Controller/lobbycontroller.hpp"
#include "game/Controller/selectplayercontroller.hpp"
#include "game/Controller/createplayercontroller.hpp"
#include "game/Controller/selectplacecontroller.hpp"

namespace game {

class Mediator : public QObject
{
    Q_OBJECT

public:
    explicit Mediator();
    ~Mediator();

public slots:
    void OnWelcomeKey0_Clicked(); // WelcomeView -> Single Player

public:
    void Start();

    Player *GetPlayer();

private:
    Player           *m_MainPlayer; // TODO: перенести в модель, а модель сюда
    formname_e       m_CurrentHolder; // Текущий вид на default форме
    DefaultWindow    *m_ParentWindow;

    WelcomeController       *m_Welcome;
    LobbyController         *m_Lobby;
    SelectPlayerController  *m_SelectPlayer;
    CreatePlayerController  *m_CreatePlayer;
    SelectPlaceController   *m_SelectPlace;
};

} // namespace game

#endif // MEDIATOR_H
