#include "game/Controller/createplayercontroller.hpp"


game::CreatePlayerController::CreatePlayerController(QWidget *a_Parent)
{
    this->m_View = new game::CreatePlayerView();
    this->m_View->Setup();

    // Qobject::connect
    QObject::connect(&this->m_View->m_Buttons[0], SIGNAL(clicked()), this, SLOT(OnKey0_Clicked()));
}

game::CreatePlayerController::~CreatePlayerController()
{

}

void game::CreatePlayerController::OnKey0_Clicked()
{
    emit Sig_Key0_Clicked();
}

void game::CreatePlayerController::Startup()
{
    this->m_View->show();
}

void game::CreatePlayerController::Endup()
{
    this->m_View->hide();
}
