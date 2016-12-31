#ifndef IGAMEITEM_H
#define IGAMEITEM_H

#include "game/common.hpp"

namespace game {

class IGameItem
{
public:
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

protected:
    UString m_Name;
    UString m_Description;
    r64     m_BuyPrice;
    r64     m_SellPriceP1P; // per 1 condition %
    u32     m_Count; // в пачке
    u32     m_MinRank;
    r64     m_SelfWeight; // собственный вес
    itemrarity_e    m_Rarity;
    itemtype_e      m_Type;


public:
    explicit IGameItem();
    virtual ~IGameItem();

    UString Name() const;
    void setName(const UString &Name);

    UString Description() const;
    void setDescription(const UString &Description);

    r64 BuyPrice() const;
    void setBuyPrice(const r64 &BuyPrice);

    r64 SellPriceP1P() const;
    void setSellPriceP1P(const r64 &SellPriceP1P);

    u32 Count() const;
    void setCount(const u32 &Count);

    u32 MinRank() const;
    void setMinRank(const u32 &MinRank);

    r64 SelfWeight() const;
    void setSelfWeight(const r64 &SelfWeight);

    itemrarity_e Rarity() const;
    void setRarity(const itemrarity_e &Rarity);

    itemtype_e Type() const;
    void setType(const itemtype_e &Type);
};

} // namespace game

#endif // IGAMEITEM_H
