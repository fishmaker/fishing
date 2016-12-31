#include "game/playerstats.hpp"

game::u32 game::PlayerStats::Catched() const
{
    return m_Catched;
}

void game::PlayerStats::setCatched(const game::u32 &Catched)
{
    m_Catched = Catched;
}

game::u32 game::PlayerStats::Released() const
{
    return m_Released;
}

void game::PlayerStats::setReleased(const game::u32 &Released)
{
    m_Released = Released;
}

game::u64 game::PlayerStats::Karma() const
{
    return m_Karma;
}

void game::PlayerStats::setKarma(const game::u64 &Karma)
{
    m_Karma = Karma;
}

game::UString game::PlayerStats::Status() const
{
    return m_Status;
}

void game::PlayerStats::setStatus(const game::UString &Status)
{
    m_Status = Status;
}

game::r64 game::PlayerStats::RecordWeight() const
{
    return m_RecordWeight;
}

void game::PlayerStats::setRecordWeight(const game::r64 &RecordWeight)
{
    m_RecordWeight = RecordWeight;
}

game::u32 game::PlayerStats::BrokenRods() const
{
    return m_BrokenRods;
}

void game::PlayerStats::setBrokenRods(const game::u32 &BrokenRods)
{
    m_BrokenRods = BrokenRods;
}

game::u32 game::PlayerStats::BrokenReels() const
{
    return m_BrokenReels;
}

void game::PlayerStats::setBrokenReels(const game::u32 &BrokenReels)
{
    m_BrokenReels = BrokenReels;
}

game::PlayerStats::PlayerStats()
{

}

game::PlayerStats::~PlayerStats()
{

}
