#include "game/Controller/lobbycontroller.hpp"

game::LobbyController::LobbyController(QWidget *a_Parent)
{
    this->m_View = new game::LobbyView(a_Parent);
    this->m_View->Setup();

    // QObject::connect
    QObject::connect(&this->m_View->m_Buttons[0], SIGNAL(clicked()), this, SLOT(OnKey0_Clicked()));
    QObject::connect(&this->m_View->m_Buttons[1], SIGNAL(clicked()), this, SLOT(OnKey1_Clicked()));
    QObject::connect(&this->m_View->m_Buttons[2], SIGNAL(clicked()), this, SLOT(OnKey2_Clicked()));
    QObject::connect(&this->m_View->m_Buttons[3], SIGNAL(clicked()), this, SLOT(OnKey3_Clicked()));
    QObject::connect(&this->m_View->m_Buttons[4], SIGNAL(clicked()), this, SLOT(OnKey4_Clicked()));
    QObject::connect(&this->m_View->m_Buttons[5], SIGNAL(clicked()), this, SLOT(OnKey5_Clicked()));
    QObject::connect(&this->m_View->m_Buttons[6], SIGNAL(clicked()), this, SLOT(OnKey6_Clicked()));
}

game::LobbyController::~LobbyController()
{
    delete this->m_View;
}

void game::LobbyController::Startup()
{
    this->m_View->show();
}

void game::LobbyController::Endup()
{
    this->m_View->hide();
}

void game::LobbyController::OnKey0_Clicked()
{
    emit Sig_Key0_Clicked();
}

void game::LobbyController::OnKey1_Clicked()
{
    emit Sig_Key1_Clicked();
}


void game::LobbyController::OnKey2_Clicked()
{
    emit Sig_Key2_Clicked();
}


void game::LobbyController::OnKey3_Clicked()
{
    emit Sig_Key3_Clicked();
}


void game::LobbyController::OnKey4_Clicked()
{
    emit Sig_Key4_Clicked();
}


void game::LobbyController::OnKey5_Clicked()
{
    emit Sig_Key5_Clicked();
}


void game::LobbyController::OnKey6_Clicked()
{
    emit Sig_Key6_Clicked();
}
