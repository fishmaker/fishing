#include "game/Controller/foodcontroller.hpp"

game::FoodController::FoodController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new FoodView();
    this->m_View->Setup();
}

game::FoodController::~FoodController()
{

}

void game::FoodController::Startup()
{
    this->m_View->show();
}

void game::FoodController::Endup()
{
    this->m_View->hide();

}
