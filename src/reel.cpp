#include "game/reel.hpp"

game::r64 game::Reel::EffectiveWeight() const
{
    return m_EffectiveWeight;
}

void game::Reel::setEffectiveWeight(const game::r64 &EffectiveWeight)
{
    m_EffectiveWeight = EffectiveWeight;
}

game::r64 game::Reel::RelaxSpeed() const
{
    return m_RelaxSpeed;
}

void game::Reel::setRelaxSpeed(const game::r64 &RelaxSpeed)
{
    m_RelaxSpeed = RelaxSpeed;
}

game::reelactions_e game::Reel::Actions() const
{
    return m_Actions;
}

void game::Reel::setActions(const game::reelactions_e &Actions)
{
    m_Actions = Actions;
}

game::Reel::Reel()
{

}

game::Reel::~Reel()
{

}
