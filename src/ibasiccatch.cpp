#include "game/ibasiccatch.hpp"

game::UString game::IBasicCatch::Name() const
{
    return m_Name;
}

void game::IBasicCatch::setName(const game::UString &Name)
{
    m_Name = Name;
}

game::UString game::IBasicCatch::Description() const
{
    return m_Description;
}

void game::IBasicCatch::setDescription(const game::UString &Description)
{
    m_Description = Description;
}

QString game::IBasicCatch::ImagePath() const
{
    return m_ImagePath;
}

void game::IBasicCatch::setImagePath(const QString &ImagePath)
{
    m_ImagePath = ImagePath;
}

game::catchtype_e game::IBasicCatch::FishType() const
{
    return m_FishType;
}

void game::IBasicCatch::setFishType(const game::catchtype_e &FishType)
{
    m_FishType = FishType;
}

game::r64 game::IBasicCatch::Weight() const
{
    return m_Weight;
}

void game::IBasicCatch::setWeight(const game::r64 &Weight)
{
    m_Weight = Weight;
}

game::r64 game::IBasicCatch::Price() const
{
    return m_Price;
}

void game::IBasicCatch::setPrice(const game::r64 &Price)
{
    m_Price = Price;
}

game::i32 game::IBasicCatch::Expirience() const
{
    return m_Expirience;
}

void game::IBasicCatch::setExpirience(const game::i32 &Expirience)
{
    m_Expirience = Expirience;
}

game::i32 game::IBasicCatch::Depth() const
{
    return m_Depth;
}

void game::IBasicCatch::setDepth(const game::i32 &Depth)
{
    m_Depth = Depth;
}

game::UString game::IBasicCatch::PlaceName() const
{
    return m_PlaceName;
}

void game::IBasicCatch::setPlaceName(const game::UString &PlaceName)
{
    m_PlaceName = PlaceName;
}

game::UString game::IBasicCatch::BaitName() const
{
    return m_BaitName;
}

void game::IBasicCatch::setBaitName(const game::UString &BaitName)
{
    m_BaitName = BaitName;
}

game::IBasicCatch::IBasicCatch()
{
    
}

game::IBasicCatch::~IBasicCatch()
{
    
}
