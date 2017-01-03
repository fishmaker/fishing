#include "game/Controller/lobbycontroller.hpp"

game::LobbyController::LobbyController(QWidget *a_Parent)
{
    this->m_View = new game::LobbyView();
    this->m_View->setParent(a_Parent);

}

game::LobbyController::~LobbyController()
{

}


void game::LobbyController::Startup()
{

}

void game::LobbyController::Endup()
{

}
