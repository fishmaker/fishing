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

void game::Location::p_SetName(LString& a_Data)
{
    this->m_Name = a_Data;
}

void game::Location::p_SetMinRank(LString& a_Data)
{
    this->m_MinRank = static_cast<u32>(std::stoi(a_Data));  // TODO: care of overflow
}

void game::Location::p_SetDayCost(LString& a_Data)
{
    this->m_DayCost = std::stod(a_Data);
}

void game::Location::p_SetFlyCost(LString& a_Data)
{
    this->m_FlyCost = std::stod(a_Data);
}

void game::Location::p_TrainCost(LString& a_Data)
{
    this->m_TrainCost = std::stod(a_Data);
}

void game::Location::p_HouseCost(LString& a_Data)
{
    this->m_HouseCost = std::stod(a_Data);
}

game::Location::Location()
{
    this->m_mInitializer["Name"]        = std::bind(&Location::p_SetName, this, std::placeholders::_1);
    this->m_mInitializer["MinRank"]     = std::bind(&Location::p_SetMinRank, this, std::placeholders::_1);
    this->m_mInitializer["DayCost"]     = std::bind(&Location::p_SetDayCost, this, std::placeholders::_1);
    this->m_mInitializer["FlyCost"]     = std::bind(&Location::p_SetFlyCost, this, std::placeholders::_1);
    this->m_mInitializer["TrainCost"]   = std::bind(&Location::p_TrainCost, this, std::placeholders::_1);
    this->m_mInitializer["HouseCost"]   = std::bind(&Location::p_HouseCost, this, std::placeholders::_1);
}

game::Location::~Location()
{
    
}
