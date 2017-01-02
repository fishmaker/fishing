#ifndef LOCATION_H
#define LOCATION_H

#include <vector>

#include "game/common/common.hpp"
#include "game/World/place.hpp"

namespace game {

class Location
{
    UString m_Name;             // (7000)
    // TODO: Shop
    u32 m_MinRank;              // (3000)
    r64 m_DayCost;              // (6000)
    r64 m_FlyCost;              // (6001)
    r64 m_TrainCost;            // (6002)
    r64 m_HouseCost;            // (6003)
    std::vector<Place> m_vSeats;

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
