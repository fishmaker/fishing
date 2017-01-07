#include "game/Controller/warningcontroller.hpp"

game::WarningController::WarningController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new WarningView();
    this->m_View->Setup();
}

game::WarningController::~WarningController()
{

}

void game::WarningController::Startup()
{
    this->m_View->show();
}

void game::WarningController::Endup()
{
    this->m_View->hide();

}
