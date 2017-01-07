#include "game/Controller/selectfkcontroller.hpp"

game::SelectFKController::SelectFKController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new SelectFKView();
    this->m_View->Setup();
}

game::SelectFKController::~SelectFKController()
{

}

void game::SelectFKController::Startup()
{
    this->m_View->show();
}

void game::SelectFKController::Endup()
{
    this->m_View->hide();

}
