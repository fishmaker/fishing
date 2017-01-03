#ifndef FISHINGSET_H
#define FISHINGSET_H

#include "game/Interfaces/ifishingrod.hpp"
#include "game/Interfaces/ihook.hpp"
#include "game/Items/bait.hpp"
#include "game/Items/hook.hpp"
#include "game/Items/line.hpp"
#include "game/Items/reel.hpp"
#include "game/Items/rod.hpp"
#include "game/Items/spinning.hpp"
#include "game/Items/spoon.hpp"

namespace game {

class FishingSet
{
    IFishingRod *m_Rod;
    Reel        *m_Reel;
    Line        *m_Line;
    IHook       *m_Hook;
    Bait        *m_Bait;

public:
    explicit FishingSet();
    ~FishingSet();


    IFishingRod *GetRod() const;
    void setRod(IFishingRod *a_Rod);

    Reel *GetReel() const;
    void setReel(Reel *a_Reel);

    Line *GetLine() const;
    void setLine(Line *a_Line);

    IHook *GetHook() const;
    void setHook(IHook *a_Hook);

    Bait *GetBait() const;
    void setBait(Bait *a_Bait);
};

} // namespace game

#endif // FISHINGSET_H
