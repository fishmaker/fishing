#ifndef SPINNING_H
#define SPINNING_H

#include "game/common/common.hpp"
#include "game/Interfaces/igameitem.hpp"
#include "game/Interfaces/ifishingrod.hpp"

namespace game {

typedef enum {
    WS_SLOW,
    WS_NORMAL,
    WS_FAST
} wirespeed_e; // скорость проводки

typedef enum {
    SA_ABORT            = 0b00000001, // выкинуть
    SA_REPAIR           = 0b00000010, // ремонтировать
    SA_SIGN             = 0b00000100, // подписать
    SA_UPGRADE          = 0b00001000, // улучшить
} spinningactions_e;

class Spinning : public IGameItem, public IFishingRod
{
    wirespeed_e m_WireSpeed;
    spinningactions_e m_SpinningActions;

public:
    explicit Spinning();
    ~Spinning();

    wirespeed_e WireSpeed() const;
    void setWireSpeed(const wirespeed_e &WireSpeed);

    spinningactions_e SpinningActions() const;
    void setSpinningActions(const spinningactions_e &SpinningActions);
};

} // namespace game

#endif // SPINNING_H
