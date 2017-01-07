#include "game/Controller/questscontroller.hpp"

game::QuestsController::QuestsController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new QuestsView();
    this->m_View->Setup();
}

game::QuestsController::~QuestsController()
{

}

void game::QuestsController::Startup()
{
    this->m_View->show();
}

void game::QuestsController::Endup()
{
    this->m_View->hide();

}
