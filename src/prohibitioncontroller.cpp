#include "game/Controller/prohibitioncontroller.hpp"

game::ProhibitionController::ProhibitionController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new ProhibitionView();
    this->m_View->Setup();
}

game::ProhibitionController::~ProhibitionController()
{

}

void game::ProhibitionController::Startup()
{
    this->m_View->show();
}

void game::ProhibitionController::Endup()
{
    this->m_View->hide();

}
