#include "game/Controller/bankcontroller.hpp"

game::BankController::BankController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new BankView();
    this->m_View->Setup();
}

game::BankController::~BankController()
{

}

void game::BankController::Startup()
{
    this->m_View->show();
}

void game::BankController::Endup()
{
    this->m_View->hide();

}
