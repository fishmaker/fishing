#include "game/location.hpp"

UString Location::Name() const
{
    return m_Name;
}

void Location::setName(const UString &Name)
{
    m_Name = Name;
}

std::vector<Place> Location::Seats() const
{
    return m_Seats;
}

void Location::setSeats(const std::vector<Place> &Seats)
{
    m_Seats = Seats;
}

r64 Location::DayCost() const
{
    return m_DayCost;
}

void Location::setDayCost(const r64 &DayCost)
{
    m_DayCost = DayCost;
}

u32 Location::MinRank() const
{
    return m_MinRank;
}

void Location::setMinRank(const u32 &MinRank)
{
    m_MinRank = MinRank;
}

r64 Location::FlyCost() const
{
    return m_FlyCost;
}

void Location::setFlyCost(const r64 &FlyCost)
{
    m_FlyCost = FlyCost;
}

r64 Location::TrainCost() const
{
    return m_TrainCost;
}

void Location::setTrainCost(const r64 &TrainCost)
{
    m_TrainCost = TrainCost;
}

r64 Location::HouseCost() const
{
    return m_HouseCost;
}

void Location::setHouseCost(const r64 &HouseCost)
{
    m_HouseCost = HouseCost;
}

game::Location::Location()
{
    
}

game::Location::~Location()
{
    
}
