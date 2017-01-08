#include "game/Controller/fishinggamecontroller.hpp"

game::FishingGameController::FishingGameController(QWidget *a_Parent)
{
    this->m_Model = new game::FishingGameModel();
    this->m_View = new game::FishingGameView(a_Parent);
    this->m_View->Setup();
}

game::FishingGameController::~FishingGameController()
{

}

void game::FishingGameController::Startup()
{
    this->m_View->SetBG(QImage(":/data/images/f30001.jpg"));
    this->m_View->show();
}

void game::FishingGameController::Endup()
{
    this->m_View->hide();
}
