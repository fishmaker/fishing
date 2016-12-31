#ifndef FISH_H
#define FISH_H

#include "game/common.hpp"
#include "game/ibasiccatch.hpp"
#include "game/catchtypes.hpp"

namespace game {

class Fish : public IBasicCatch
{
    catchclass_e    m_CatchClass;   // CC_FISH
    i32             m_BitingTime;   // время клева
    i32             m_FreqBite;     // частота клева
    i32             m_PlayerReactionTime;   // время на реакцию у игрока
    i32             m_MaxCatchTime; // максимум времени у игрока на вываживание

public:
    Fish();
    ~Fish();

    catchclass_e CatchClass() const;
    void setCatchClass(const catchclass_e &CatchClass);
};

} // namespace game

#endif // FISH_H
