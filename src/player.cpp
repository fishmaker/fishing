#include "game/player.hpp"

game::UString game::Player::Name() const
{
    return m_Name;
}

void game::Player::setName(const game::UString &Name)
{
    m_Name = Name;
}

game::i32 game::Player::Rank() const
{
    return m_Rank;
}

void game::Player::setRank(const game::i32 &Rank)
{
    m_Rank = Rank;
}

game::i64 game::Player::Expirience() const
{
    return m_Expirience;
}

void game::Player::setExpirience(const game::i64 &Expirience)
{
    m_Expirience = Expirience;
}

game::r64 game::Player::Money() const
{
    return m_Money;
}

void game::Player::setMoney(const game::r64 &Money)
{
    m_Money = Money;
}

game::u32 game::Player::Hungry() const
{
    return m_Hungry;
}

void game::Player::setHungry(const game::u32 &Hungry)
{
    m_Hungry = Hungry;
}

game::u32 game::Player::Alcogol() const
{
    return m_Alcogol;
}

void game::Player::setAlcogol(const game::u32 &Alcogol)
{
    m_Alcogol = Alcogol;
}

game::Bag* game::Player::getBag()
{
    return &m_Bag;
}

game::PlayerStats* game::Player::Stats()
{
    return &m_Stats;
}

game::Suitcase* game::Player::getSuitcase()
{
    return &m_Suitcase;
}

game::Player::Player()
{
    
}

game::Player::~Player()
{
    
}
