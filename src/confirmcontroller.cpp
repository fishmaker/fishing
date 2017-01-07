#include "game/Controller/confirmcontroller.hpp"

game::ConfirmController::ConfirmController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new ConfirmView();
    this->m_View->Setup();
}

game::ConfirmController::~ConfirmController()
{

}

void game::ConfirmController::Startup()
{
    this->m_View->show();
}

void game::ConfirmController::Endup()
{
    this->m_View->hide();

}
