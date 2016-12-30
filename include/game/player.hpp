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
};

} // namespace game

#endif // PLAYER_H
