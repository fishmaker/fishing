#include "game/Controller/errorcontroller.hpp"

game::ErrorController::ErrorController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new ErrorView();
    this->m_View->Setup();
}

game::ErrorController::~ErrorController()
{

}

void game::ErrorController::Startup()
{
    this->m_View->show();
}

void game::ErrorController::Endup()
{
    this->m_View->hide();

}
