#include "game/Controller/sellfishcontroller.hpp"

game::SellFishController::SellFishController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new SellFishView();
    this->m_View->Setup();
}

game::SellFishController::~SellFishController()
{

}

void game::SellFishController::Startup()
{
    this->m_View->show();
}

void game::SellFishController::Endup()
{
    this->m_View->hide();

}
