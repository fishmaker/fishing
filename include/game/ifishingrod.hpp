#ifndef IFISHINGROD_H
#define IFISHINGROD_H

#include "game/common.hpp"

namespace game {

class IFishingRod
{
protected:
    r64 m_MaxWeight;
    u32 m_Condition; // состояние
    r64 m_RelaxSpeed; // время снятия напряжения

public:
    explicit IFishingRod();
    virtual ~IFishingRod();

    r64 MaxWeight() const;
    void setMaxWeight(const r64 &MaxWeight);

    u32 Condition() const;
    void setCondition(const u32 &Condition);

    r64 RelaxSpeed() const;
    void setRelaxSpeed(const r64 &RelaxSpeed);
};

} // namespace game

#endif // IFISHINGROD_H
