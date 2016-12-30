#ifndef PLAYERSTATS_H
#define PLAYERSTATS_H

#include "game/common.hpp"

namespace game {

class PlayerStats
{
    u32 m_Catched;
    u32 m_Released;
    u64 m_Karma;
    UString m_Status;
    r64 m_RecordWeight;
    u32 m_BrokenRods;
    u32 m_BrokenReels;

public:
    explicit PlayerStats();
    virtual ~PlayerStats();
};

} // namespace game

#endif // PLAYERSTATS_H
