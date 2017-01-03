#include "game/Controller/fishinggamecontroller.hpp"

game::FishingGameController::FishingGameController(QWidget *a_Parent)
{
    this->m_View = new FishingGameView(a_Parent);
}

game::FishingGameController::~FishingGameController()
{

}

void game::FishingGameController::Startup()
{

}

void game::FishingGameController::Endup()
{

}
