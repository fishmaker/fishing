#include "game/Controller/welcomecontroller.hpp"

game::WelcomeController::WelcomeController(QWidget *a_Parent)
{
    this->m_View = new WelcomeView();
    this->m_View->setParent(a_Parent);
}

game::WelcomeController::~WelcomeController()
{
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
    this->m_View->hide();
}
