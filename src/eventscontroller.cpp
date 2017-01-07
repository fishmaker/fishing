#include "game/Controller/eventscontroller.hpp"

game::EventsController::EventsController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new EventView();
    this->m_View->Setup();
}

game::EventsController::~EventsController()
{

}

void game::EventsController::Startup()
{
    this->m_View->show();
}

void game::EventsController::Endup()
{
    this->m_View->hide();

}
