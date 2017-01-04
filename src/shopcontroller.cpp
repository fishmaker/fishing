#include "game/Controller/shopcontroller.hpp"

game::ShopController::ShopController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new game::ShopView();
    this->m_View->Setup();
}

game::ShopController::~ShopController()
{

}

void game::ShopController::Startup()
{
    this->m_View->show();
}

void game::ShopController::Endup()
{
    this->m_View->hide();
}
