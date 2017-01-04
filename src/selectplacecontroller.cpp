#include "game/Controller/selectplacecontroller.hpp"

game::SelectPlaceController::SelectPlaceController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new game::SelectPlaceView();
    this->m_View->Setup();
}

game::SelectPlaceController::~SelectPlaceController()
{

}

void game::SelectPlaceController::Startup()
{
    this->m_View->show();

}

void game::SelectPlaceController::Endup()
{
    this->m_View->hide();
}
