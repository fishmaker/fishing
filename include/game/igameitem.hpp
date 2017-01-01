#ifndef IGAMEITEM_H
#define IGAMEITEM_H

#include "game/common/common.hpp"

namespace game {

typedef enum : i32 {
    IR_COMMON       = 0,
    IR_UNCOMMON,
    IR_RARE,
    IR_MYTHICAL,
    IR_LEGENDARY,
    IR_ANCIENT,
    IR_IMMORTAL,
    IR_ARCANA,
} itemrarity_e;

typedef enum : i32 {
    IT_ROD          = 0,
    IT_SPINNING,
    IT_REEL,
    IT_LINE,
    IT_HOOK,
    IT_SPOON,
    IT_BAIT,
    IT_POTITION, // TODO: + etc..
} itemtype_e;

class IGameItem
{
protected:
    UString             m_Name;
    UString             m_Description;
    r64                 m_BuyPrice;
    r64                 m_SellPriceP1P; // per 1 condition %
    r64                 m_SelfWeight;   // собственный вес
    u32                 m_Count;        // в пачке
    u32                 m_MinRank;
    itemrarity_e        m_Rarity;
    itemtype_e          m_Type;

public:
    explicit IGameItem();
    virtual ~IGameItem();
};

} // namespace game

#endif // IGAMEITEM_H
