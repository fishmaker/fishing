#include "game/Controller/suitkitcontroller.hpp"

game::SuitkitController::SuitkitController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new SuitkitView();
    this->m_View->Setup();
}

game::SuitkitController::~SuitkitController()
{

}

void game::SuitkitController::Startup()
{
    this->m_View->show();
}

void game::SuitkitController::Endup()
{
    this->m_View->hide();

}
