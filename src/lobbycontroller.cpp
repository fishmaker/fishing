#include "game/Controller/lobbycontroller.hpp"

game::LobbyController::LobbyController(QWidget *a_Parent)
{
    this->m_View = new game::LobbyView(a_Parent);
    this->m_View->Setup();
}

game::LobbyController::~LobbyController()
{
    delete this->m_View;
}

void game::LobbyController::Startup()
{
    this->m_View->show();
}

void game::LobbyController::Endup()
{
    this->m_View->hide();
}
