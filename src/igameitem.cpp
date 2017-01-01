#include "game/Interfaces/igameitem.hpp"

game::IGameItem::IGameItem()
{
    
}

game::IGameItem::~IGameItem()
{
    
}

game::UString game::IGameItem::Name() const
{
    return m_Name;
}

void game::IGameItem::setName(const game::UString &Name)
{
    m_Name = Name;
}

game::UString game::IGameItem::Description() const
{
    return m_Description;
}

void game::IGameItem::setDescription(const game::UString &Description)
{
    m_Description = Description;
}

game::r64 game::IGameItem::BuyPrice() const
{
    return m_BuyPrice;
}

void game::IGameItem::setBuyPrice(const game::r64 &BuyPrice)
{
    m_BuyPrice = BuyPrice;
}

game::r64 game::IGameItem::SellPriceP1P() const
{
    return m_SellPriceP1P;
}

void game::IGameItem::setSellPriceP1P(const game::r64 &SellPriceP1P)
{
    m_SellPriceP1P = SellPriceP1P;
}

game::r64 game::IGameItem::SelfWeight() const
{
    return m_SelfWeight;
}

void game::IGameItem::setSelfWeight(const game::r64 &SelfWeight)
{
    m_SelfWeight = SelfWeight;
}

game::u32 game::IGameItem::Count() const
{
    return m_Count;
}

void game::IGameItem::setCount(const game::u32 &Count)
{
    m_Count = Count;
}

game::u32 game::IGameItem::MinRank() const
{
    return m_MinRank;
}

void game::IGameItem::setMinRank(const game::u32 &MinRank)
{
    m_MinRank = MinRank;
}

game::itemrarity_e game::IGameItem::Rarity() const
{
    return m_Rarity;
}

void game::IGameItem::setRarity(const game::itemrarity_e &Rarity)
{
    m_Rarity = Rarity;
}

game::itemtype_e game::IGameItem::Type() const
{
    return m_Type;
}

void game::IGameItem::setType(const game::itemtype_e &Type)
{
    m_Type = Type;
}
