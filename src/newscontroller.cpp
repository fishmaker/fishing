#include "game/Controller/newscontroller.hpp"

game::NewsController::NewsController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new NewsView();
    this->m_View->Setup();
}

game::NewsController::~NewsController()
{

}

void game::NewsController::Startup()
{
    this->m_View->show();
}

void game::NewsController::Endup()
{
    this->m_View->hide();

}
