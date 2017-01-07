#include "game/Controller/itemscontroller.hpp"

game::ItemsController::ItemsController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new ItemsView();
    this->m_View->Setup();
}

game::ItemsController::~ItemsController()
{

}

void game::ItemsController::Startup()
{
    this->m_View->show();
}

void game::ItemsController::Endup()
{
    this->m_View->hide();

}
