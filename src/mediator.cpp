#include "game/mediator.hpp"

const QRect game::Mediator::s_L1DIMENSIONS = QRect(0, 0, 1600, 900);
const QRect game::Mediator::s_L2DIMENSIONS = QRect(0, 0, 896, 504);
const QRect game::Mediator::s_L3DIMENSIONS = QRect(0, 0, 512, 256);

game::Mediator::Mediator()
{
    this->m_ParentWindow = new game::DefaultWindow();
    this->m_ParentWindow->setGeometry(game::Mediator::s_L1DIMENSIONS);
    this->m_ParentWindow->show();
}

game::Mediator::~Mediator()
{

}

game::Player* game::Mediator::GetPlayer()
{
    return &this->m_MainPlayer;
}
