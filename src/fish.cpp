#include "game/fish.hpp"

game::Fish::Fish(const catchclass_e a_CatchClass,
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
                 const i32 a_BitingTime,
                 const i32 a_FreqBite,
                 const i32 a_PlayerReactionTime,
                 const i32 a_MaxCatchTime)
    : IBasicCatch(a_CatchClass, std::move(a_Name), std::move(a_Description), std::move(a_ImagePath), a_FishType, a_Weight, a_Price, a_Expirience, a_Depth, std::move(a_PlaceName), std::move(a_BaitName)),
      m_BitingTime(a_BitingTime), m_FreqBite(a_FreqBite), m_PlayerReactionTime(a_PlayerReactionTime), m_MaxCatchTime(a_MaxCatchTime)
{
    
}

game::Fish::~Fish()
{
    
}
