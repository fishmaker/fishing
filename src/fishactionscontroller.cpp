#include "game/Controller/fishactionscontroller.hpp"

game::FishActionsController::FishActionsController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new FishActionsView();
    this->m_View->Setup();
}

game::FishActionsController::~FishActionsController()
{

}

void game::FishActionsController::Startup()
{
    this->m_View->show();
}

void game::FishActionsController::Endup()
{
    this->m_View->hide();

}
