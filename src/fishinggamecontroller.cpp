#include "game/Controller/fishinggamecontroller.hpp"

game::FishingGameController::FishingGameController(QWidget *a_Parent)
{
    this->m_View = new FishingGameView(a_Parent);
    this->m_View->Setup();
}

game::FishingGameController::~FishingGameController()
{

}

void game::FishingGameController::Startup()
{
    this->m_View->show();
}

void game::FishingGameController::Endup()
{
    this->m_View->hide();
}
