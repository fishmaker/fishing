#ifndef PLAYER_H
#define PLAYER_H

#include "game/common.hpp"
#include "game/bag.hpp"
#include "game/playerstats.hpp"

namespace game {

class Player
{
    UString m_Name;
    i32 m_Rank;
    i64 m_Expirience;
    r64 m_Money;
    u32 m_Hungry;
    u32 m_Alcogol;
    Bag m_Bag;
    PlayerStats m_Stats;

public:
    explicit Player();
    virtual ~Player();

    UString Name() const;
    void setName(const UString &Name);

    i32 Rank() const;
    void setRank(const i32 &Rank);

    i64 Expirience() const;
    void setExpirience(const i64 &Expirience);

    r64 Money() const;
    void setMoney(const r64 &Money);

    u32 Hungry() const;
    void setHungry(const u32 &Hungry);

    u32 Alcogol() const;
    void setAlcogol(const u32 &Alcogol);

    Bag Bag() const;
    void setBag(const Bag &Bag);

    PlayerStats Stats() const;
    void setStats(const PlayerStats &Stats);
};

} // namespace game

#endif // PLAYER_H