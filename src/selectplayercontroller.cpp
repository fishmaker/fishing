#include "game/Controller/selectplayercontroller.hpp"

game::SelectPlayerController::SelectPlayerController(QWidget *a_Parent)
{
    this->m_View = new game::SelectPlayerView();
    this->m_View->Setup();
}

game::SelectPlayerController::~SelectPlayerController()
{

}

void game::SelectPlayerController::Startup()
{
    this->m_View->show();
}

void game::SelectPlayerController::Endup()
{
    this->m_View->hide();
}
