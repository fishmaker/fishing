#ifndef FISH_H
#define FISH_H

#include "game/common.hpp"
#include "game/ibasiccatch.hpp"
#include "game/catchtypes.hpp"

namespace game {

class Fish : public IBasicCatch
{
    i32             m_BitingTime;   // время клева
    i32             m_FreqBite;     // частота клева
    i32             m_PlayerReactionTime;   // время на реакцию у игрока
    i32             m_MaxCatchTime; // максимум времени у игрока на вываживание

public:
    // Всем занимается std::bind() с параметрами
    explicit Fish(/* IBasicCatch */
                  const catchclass_e a_CatchClass,
                  UString &&a_Name,
                  UString &&a_Description,
                  QString &&a_ImagePath,
                  const catchtype_e a_FishType,
                  const r64 a_Weight,
                  const r64 a_Price,
                  const i32 a_Expirience,
                  const i32 a_Depth,
                  UString &&a_PlaceName,
                  UString &&a_BaitName,
                  /* Fish */
                  const i32 a_BitingTime,
                  const i32 a_FreqBite,
                  const i32 a_PlayerReactionTime,
                  const i32 a_MaxCatchTime);
    ~Fish();

};

} // namespace game

#endif // FISH_H
