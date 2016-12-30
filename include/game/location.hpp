#ifndef LOCATION_H
#define LOCATION_H

#include <vector>

#include "game/common.hpp"
#include "game/place.hpp"

namespace game {

class Location
{
    UString m_Name;
    std::vector<Place> m_Seats;
    // TODO: Shop
    r64 m_DayCost;
    u32 m_MinRank;
    r64 m_FlyCost;
    r64 m_TrainCost;
    r64 m_HouseCost;

public:
    explicit Location();
    virtual ~Location();
};

} // namespace game

#endif // LOCATION_H
