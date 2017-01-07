#include "game/Controller/fishpondcontroller.hpp"

game::FishpondController::FishpondController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new FishpondView();
    this->m_View->Setup();
}

game::FishpondController::~FishpondController()
{

}

void game::FishpondController::Startup()
{
    this->m_View->show();
}

void game::FishpondController::Endup()
{
    this->m_View->hide();

}
