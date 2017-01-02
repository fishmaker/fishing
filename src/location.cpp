#include "game/World/location.hpp"

game::UString game::Location::Name() const
{
    return m_Name;
}

void game::Location::setName(const game::UString &Name)
{
    m_Name = Name;
}

std::vector<game::Place> game::Location::Seats() const
{
    return m_vSeats;
}

void game::Location::setSeats(const std::vector<game::Place> &Seats)
{
    m_vSeats = Seats;
}

game::r64 game::Location::DayCost() const
{
    return m_DayCost;
}

void game::Location::setDayCost(const game::r64 &DayCost)
{
    m_DayCost = DayCost;
}

game::u32 game::Location::MinRank() const
{
    return m_MinRank;
}

void game::Location::setMinRank(const game::u32 &MinRank)
{
    m_MinRank = MinRank;
}

game::r64 game::Location::FlyCost() const
{
    return m_FlyCost;
}

void game::Location::setFlyCost(const game::r64 &FlyCost)
{
    m_FlyCost = FlyCost;
}

game::r64 game::Location::TrainCost() const
{
    return m_TrainCost;
}

void game::Location::setTrainCost(const game::r64 &TrainCost)
{
    m_TrainCost = TrainCost;
}

game::r64 game::Location::HouseCost() const
{
    return m_HouseCost;
}

void game::Location::setHouseCost(const game::r64 &HouseCost)
{
    m_HouseCost = HouseCost;
}

game::Location::Location()
{
    
}

game::Location::~Location()
{
    
}
