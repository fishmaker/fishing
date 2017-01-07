#ifndef LOCATION_H
#define LOCATION_H

#include <vector>
#include <map>
#include <functional>

#include "game/common/common.hpp"
#include "game/World/place.hpp"

namespace game {

using func = std::function<void(LString&)>;

class Location
{
    UString m_Name;
    // TODO: Shop
    u32 m_MinRank;
    r64 m_DayCost;
    r64 m_FlyCost;
    r64 m_TrainCost;
    r64 m_HouseCost;
    std::vector<Place> m_vSeats;
    std::map<std::string, func> m_mInitializer;

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

private:
    void p_SetName(LString&);
    void p_SetMinRank(LString&);
    void p_SetDayCost(LString&);
    void p_SetFlyCost(LString&);
    void p_TrainCost(LString&);
    void p_HouseCost(LString&);
};

} // namespace game

#endif // LOCATION_H
