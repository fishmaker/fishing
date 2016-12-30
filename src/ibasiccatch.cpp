#include "game/ibasiccatch.hpp"

UString IBasicCatch::Name() const
{
    return m_Name;
}

void IBasicCatch::setName(const UString &Name)
{
    m_Name = Name;
}

UString IBasicCatch::Description() const
{
    return m_Description;
}

void IBasicCatch::setDescription(const UString &Description)
{
    m_Description = Description;
}

QString IBasicCatch::ImagePath() const
{
    return m_ImagePath;
}

void IBasicCatch::setImagePath(const QString &ImagePath)
{
    m_ImagePath = ImagePath;
}

catchtype_e IBasicCatch::FishType() const
{
    return m_FishType;
}

void IBasicCatch::setFishType(const catchtype_e &FishType)
{
    m_FishType = FishType;
}

r64 IBasicCatch::Weight() const
{
    return m_Weight;
}

void IBasicCatch::setWeight(const r64 &Weight)
{
    m_Weight = Weight;
}

r64 IBasicCatch::Price() const
{
    return m_Price;
}

void IBasicCatch::setPrice(const r64 &Price)
{
    m_Price = Price;
}

i32 IBasicCatch::Expirience() const
{
    return m_Expirience;
}

void IBasicCatch::setExpirience(const i32 &Expirience)
{
    m_Expirience = Expirience;
}

i32 IBasicCatch::Depth() const
{
    return m_Depth;
}

void IBasicCatch::setDepth(const i32 &Depth)
{
    m_Depth = Depth;
}

UString IBasicCatch::PlaceName() const
{
    return m_PlaceName;
}

void IBasicCatch::setPlaceName(const UString &PlaceName)
{
    m_PlaceName = PlaceName;
}

UString IBasicCatch::BaitName() const
{
    return m_BaitName;
}

void IBasicCatch::setBaitName(const UString &BaitName)
{
    m_BaitName = BaitName;
}

game::IBasicCatch::IBasicCatch()
{
    
}

game::IBasicCatch::~IBasicCatch()
{
    
}
