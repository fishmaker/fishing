#include "game/Controller/tabletcontroller.hpp"

game::TabletController::TabletController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new TabletView();
    this->m_View->Setup();
}

game::TabletController::~TabletController()
{

}

void game::TabletController::Startup()
{
    this->m_View->show();
}

void game::TabletController::Endup()
{
    this->m_View->hide();

}
