#include "game/Controller/welcomecontroller.hpp"

#include <QApplication>

game::WelcomeController::WelcomeController(QWidget *a_Parent)
{
    this->m_View = new game::WelcomeView(a_Parent);
    this->m_View->Setup();

    // Events from View buttons
    QObject::connect(&this->m_View->m_PushButtons[0], SIGNAL(clicked()), this, SLOT(OnKey0_Clicked()));
    QObject::connect(&this->m_View->m_PushButtons[4], SIGNAL(clicked()), this, SLOT(OnKey4_Clicked()));
}

game::WelcomeController::~WelcomeController()
{

}

void game::WelcomeController::Startup()
{
    this->m_View->show();
}

void game::WelcomeController::Endup()
{
    this->m_View->hide();
}

void game::WelcomeController::OnKey0_Clicked()
{
    emit Sig_Key0_Clicked();
}

void game::WelcomeController::OnKey1_Clicked()
{

}

void game::WelcomeController::OnKey2_Clicked()
{

}

void game::WelcomeController::OnKey3_Clicked()
{

}

void game::WelcomeController::OnKey4_Clicked()
{
    QApplication::quit();
}
