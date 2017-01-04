#include "game/Controller/selectplayercontroller.hpp"

game::SelectPlayerController::SelectPlayerController(QWidget *a_Parent)
{
    this->m_View = new game::SelectPlayerView();
    this->m_View->Setup();

    // Qobject::connect
    QObject::connect(&this->m_View->m_Buttons[0], SIGNAL(clicked()), this, SLOT(OnKey0_Clicked()));
    QObject::connect(&this->m_View->m_Buttons[1], SIGNAL(clicked()), this, SLOT(OnKey1_Clicked()));
}

game::SelectPlayerController::~SelectPlayerController()
{

}

void game::SelectPlayerController::Startup()
{
    this->m_View->show();
}

void game::SelectPlayerController::Endup()
{
    this->m_View->hide();
}

void game::SelectPlayerController::OnKey0_Clicked()
{
    emit Sig_Key0_Clicked();
}

void game::SelectPlayerController::OnKey1_Clicked()
{
    emit Sig_Key1_Clicked();
}
