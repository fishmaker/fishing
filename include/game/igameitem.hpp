#ifndef IGAMEITEM_H
#define IGAMEITEM_H

#include "game/common.hpp"

namespace game {

class IGameItem
{
    UString m_Name;
    UString m_Description;
    r64     m_BuyPrice;
    r64     m_SellPriceP1P; // per 1 condition %
    u32     m_Count; // в пачке
    u32     m_MinRank;
    r64     m_SelfWeight; // собственный вес


public:
    typedef enum : i32 {
        IR_COMMON = 0,
    } itemrarity_e;

public:
    explicit IGameItem();
    virtual ~IGameItem();
};

} // namespace game

#endif // IGAMEITEM_H
