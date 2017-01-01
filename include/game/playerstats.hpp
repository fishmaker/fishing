#ifndef PLAYERSTATS_H
#define PLAYERSTATS_H

#include "game/common/common.hpp"

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

    u32 Catched() const;
    void setCatched(const u32 &Catched);

    u32 Released() const;
    void setReleased(const u32 &Released);

    u64 Karma() const;
    void setKarma(const u64 &Karma);

    UString Status() const;
    void setStatus(const UString &Status);

    r64 RecordWeight() const;
    void setRecordWeight(const r64 &RecordWeight);

    u32 BrokenRods() const;
    void setBrokenRods(const u32 &BrokenRods);

    u32 BrokenReels() const;
    void setBrokenReels(const u32 &BrokenReels);
};

} // namespace game

#endif // PLAYERSTATS_H
