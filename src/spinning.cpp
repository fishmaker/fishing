#include "game/spinning.hpp"

game::wirespeed_e game::Spinning::WireSpeed() const
{
    return m_WireSpeed;
}

void game::Spinning::setWireSpeed(const game::wirespeed_e &WireSpeed)
{
    m_WireSpeed = WireSpeed;
}

game::spinningactions_e game::Spinning::SpinningActions() const
{
    return m_SpinningActions;
}

void game::Spinning::setSpinningActions(const game::spinningactions_e &SpinningActions)
{
    m_SpinningActions = SpinningActions;
}

game::Spinning::Spinning()
{

}

game::Spinning::~Spinning()
{

}
