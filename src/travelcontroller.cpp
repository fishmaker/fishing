#include "game/Controller/travelcontroller.hpp"

game::TravelController::TravelController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new TravelView();
    this->m_View->Setup();
}

game::TravelController::~TravelController()
{

}

void game::TravelController::Startup()
{
    this->m_View->show();
}

void game::TravelController::Endup()
{
    this->m_View->hide();
}
