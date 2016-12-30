#include "game/playerstats.hpp"

u32 PlayerStats::Catched() const
{
    return m_Catched;
}

void PlayerStats::setCatched(const u32 &Catched)
{
    m_Catched = Catched;
}

u32 PlayerStats::Released() const
{
    return m_Released;
}

void PlayerStats::setReleased(const u32 &Released)
{
    m_Released = Released;
}

u64 PlayerStats::Karma() const
{
    return m_Karma;
}

void PlayerStats::setKarma(const u64 &Karma)
{
    m_Karma = Karma;
}

UString PlayerStats::Status() const
{
    return m_Status;
}

void PlayerStats::setStatus(const UString &Status)
{
    m_Status = Status;
}

r64 PlayerStats::RecordWeight() const
{
    return m_RecordWeight;
}

void PlayerStats::setRecordWeight(const r64 &RecordWeight)
{
    m_RecordWeight = RecordWeight;
}

u32 PlayerStats::BrokenRods() const
{
    return m_BrokenRods;
}

void PlayerStats::setBrokenRods(const u32 &BrokenRods)
{
    m_BrokenRods = BrokenRods;
}

u32 PlayerStats::BrokenReels() const
{
    return m_BrokenReels;
}

void PlayerStats::setBrokenReels(const u32 &BrokenReels)
{
    m_BrokenReels = BrokenReels;
}

game::PlayerStats::PlayerStats()
{

}

game::PlayerStats::~PlayerStats()
{

}
