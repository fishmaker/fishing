#include "game/Controller/playersinfocontroller.hpp"

game::PlayersInfoController::PlayersInfoController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new PlayersInfoView();
    this->m_View->Setup();
}

game::PlayersInfoController::~PlayersInfoController()
{

}

void game::PlayersInfoController::Startup()
{
    this->m_View->show();
}

void game::PlayersInfoController::Endup()
{
    this->m_View->hide();

}
