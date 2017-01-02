#include "game/World/place.hpp"

QString game::Place::BGImage() const
{
    return m_BGImage;
}

void game::Place::setBGImage(const QString &BGImage)
{
    m_BGImage = BGImage;
}

game::UString game::Place::Description() const
{
    return m_Description;
}

void game::Place::setDescription(const game::UString &Description)
{
    m_Description = Description;
}

game::UString game::Place::Name() const
{
    return m_Name;
}

void game::Place::setName(const game::UString &Name)
{
    m_Name = Name;
}

game::Place::Place()
{
    
}

game::Place::~Place()
{
    
}
