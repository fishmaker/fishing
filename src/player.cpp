#include "game/player.hpp"

UString Player::Name() const
{
    return m_Name;
}

void Player::setName(const UString &Name)
{
    m_Name = Name;
}

i32 Player::Rank() const
{
    return m_Rank;
}

void Player::setRank(const i32 &Rank)
{
    m_Rank = Rank;
}

i64 Player::Expirience() const
{
    return m_Expirience;
}

void Player::setExpirience(const i64 &Expirience)
{
    m_Expirience = Expirience;
}

r64 Player::Money() const
{
    return m_Money;
}

r64 Player::Money() const
{
    return m_Money;
}

void Player::setMoney(const r64 &Money)
{
    m_Money = Money;
}

u32 Player::Hungry() const
{
    return m_Hungry;
}

void Player::setHungry(const u32 &Hungry)
{
    m_Hungry = Hungry;
}

u32 Player::Alcogol() const
{
    return m_Alcogol;
}

void Player::setAlcogol(const u32 &Alcogol)
{
    m_Alcogol = Alcogol;
}

Bag Player::Bag() const
{
    return m_Bag;
}

void Player::setBag(const Bag &Bag)
{
    m_Bag = Bag;
}

PlayerStats Player::Stats() const
{
    return m_Stats;
}

void Player::setStats(const PlayerStats &Stats)
{
    m_Stats = Stats;
}

game::Player::Player()
{
    
}

game::Player::~Player()
{
    
}
