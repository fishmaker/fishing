#include "game/Controller/tournamentcontroller.hpp"

game::TournamentController::TournamentController(QWidget *a_Parent)
{
    Q_UNUSED(a_Parent);
    this->m_View = new TournamentView();
    this->m_View->Setup();
}

game::TournamentController::~TournamentController()
{

}

void game::TournamentController::Startup()
{
    this->m_View->show();
}

void game::TournamentController::Endup()
{
    this->m_View->hide();

}
