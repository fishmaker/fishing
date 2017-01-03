#include "game/Items/fishingset.hpp"

game::IFishingRod *game::FishingSet::GetRod() const
{
    return m_Rod;
}

void game::FishingSet::setRod(game::IFishingRod *a_Rod)
{
    m_Rod = a_Rod;
}

game::Reel *game::FishingSet::GetReel() const
{
    return m_Reel;
}

void game::FishingSet::setReel(game::Reel *a_Reel)
{
    m_Reel = a_Reel;
}

game::Line *game::FishingSet::GetLine() const
{
    return m_Line;
}

void game::FishingSet::setLine(game::Line *a_Line)
{
    m_Line = a_Line;
}

game::IHook *game::FishingSet::GetHook() const
{
    return m_Hook;
}

void game::FishingSet::setHook(game::IHook *a_Hook)
{
    m_Hook = a_Hook;
}

game::Bait *game::FishingSet::GetBait() const
{
    return m_Bait;
}

void game::FishingSet::setBait(game::Bait *a_Bait)
{
    m_Bait = a_Bait;
}

game::FishingSet::FishingSet()
{

}

game::FishingSet::~FishingSet()
{

}
