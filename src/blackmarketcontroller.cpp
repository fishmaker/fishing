#include "game/Controller/blackmarketcontroller.hpp"

game::BlackMarketController::BlackMarketController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new BlackMarketView();
    this->m_View->Setup();
}

game::BlackMarketController::~BlackMarketController()
{

}

void game::BlackMarketController::Startup()
{
    this->m_View->show();
}

void game::BlackMarketController::Endup()
{
    this->m_View->hide();

}
