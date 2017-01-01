#ifndef LOCATION_H
#define LOCATION_H

#include <vector>

#include "game/common/common.hpp"
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

    UString Name() const;
    void setName(const UString &Name);

    std::vector<Place> Seats() const;
    void setSeats(const std::vector<Place> &Seats);

    r64 DayCost() const;
    void setDayCost(const r64 &DayCost);

    u32 MinRank() const;
    void setMinRank(const u32 &MinRank);

    r64 FlyCost() const;
    void setFlyCost(const r64 &FlyCost);

    r64 TrainCost() const;
    void setTrainCost(const r64 &TrainCost);

    r64 HouseCost() const;
    void setHouseCost(const r64 &HouseCost);
};

} // namespace game

#endif // LOCATION_H
