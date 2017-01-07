#include "game/Controller/settingscontroller.hpp"

game::SettingsController::SettingsController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new SettingsView();
    this->m_View->Setup();
}

game::SettingsController::~SettingsController()
{

}

void game::SettingsController::Startup()
{
    this->m_View->show();
}

void game::SettingsController::Endup()
{
    this->m_View->hide();

}
