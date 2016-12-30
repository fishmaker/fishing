#include "game/place.hpp"

QImage Place::BGImage() const
{
    return m_BGImage;
}

void Place::setBGImage(const QImage &BGImage)
{
    m_BGImage = BGImage;
}

std::vector<fishplaceinfo_t> Place::Fishes() const
{
    return m_Fishes;
}

void Place::setFishes(const std::vector<fishplaceinfo_t> &Fishes)
{
    m_Fishes = Fishes;
}

UString Place::Description() const
{
    return m_Description;
}

void Place::setDescription(const UString &Description)
{
    m_Description = Description;
}

UString Place::Name() const
{
    return m_Name;
}

void Place::setName(const UString &Name)
{
    m_Name = Name;
}

game::Place::Place()
{
    
}

game::Place::~Place()
{
    
}
