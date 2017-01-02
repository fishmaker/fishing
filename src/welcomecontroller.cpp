#include "game/Controller/welcomecontroller.hpp"

game::WelcomeController::WelcomeController()
{

}

game::WelcomeController::~WelcomeController()
{

}

void game::WelcomeController::setView(game::WelcomeView *View)
{
    this->m_View = View;
}

void game::WelcomeController::setModel(game::WelcomeModel *Model)
{
    this->m_Model = Model;
}
