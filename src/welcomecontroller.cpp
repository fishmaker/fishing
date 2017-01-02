#include "game/Controller/welcomecontroller.hpp"

game::WelcomeController::WelcomeController()
{
    this->m_View = new WelcomeView();
    this->m_Model = new WelcomeModel(this->m_View);
    this->m_View->setModel(this->m_Model);
}

game::WelcomeController::~WelcomeController()
{
    delete this->m_Model;
    delete this->m_View;
}

void game::WelcomeController::Startup()
{

}

void game::WelcomeController::Endup()
{

}

void game::WelcomeController::Show()
{
    this->m_View->show();
}

void game::WelcomeController::Hide()
{

}
