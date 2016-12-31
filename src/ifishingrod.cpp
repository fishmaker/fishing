#include "game/ifishingrod.hpp"

game::r64 game::IFishingRod::MaxWeight() const
{
    return m_MaxWeight;
}

void game::IFishingRod::setMaxWeight(const game::r64 &MaxWeight)
{
    m_MaxWeight = MaxWeight;
}

game::u32 game::IFishingRod::Condition() const
{
    return m_Condition;
}

void game::IFishingRod::setCondition(const game::u32 &Condition)
{
    m_Condition = Condition;
}

game::r64 game::IFishingRod::RelaxSpeed() const
{
    return m_RelaxSpeed;
}

void game::IFishingRod::setRelaxSpeed(const game::r64 &RelaxSpeed)
{
    m_RelaxSpeed = RelaxSpeed;
}

game::IFishingRod::IFishingRod()
{

}

game::IFishingRod::~IFishingRod()
{

}
