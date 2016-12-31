#ifndef REEL_H
#define REEL_H

#include "game/common.hpp"
#include "game/igameitem.hpp"

namespace game {

class Reel : public IGameItem
{
public:
    typedef enum {
        EA_ABORT            = 0b00000001, // выкинуть
        EA_REPAIR           = 0b00000010, // ремонтировать
        EA_SIGN             = 0b00000100, // подписать
        EA_UPGRADE          = 0b00001000, // улучшить
    } reelactions_e;

private:
    r64 m_EffectiveWeight;
    r64 m_RelaxSpeed;
    reelactions_e m_Actions;

public:
    explicit Reel();
    ~Reel();

    r64 EffectiveWeight() const;
    void setEffectiveWeight(const r64 &EffectiveWeight);

    r64 RelaxSpeed() const;
    void setRelaxSpeed(const r64 &RelaxSpeed);

    reelactions_e Actions() const;
    void setActions(const reelactions_e &Actions);
};

} // namespace game

#endif // REEL_H
