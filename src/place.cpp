#include "game/place.hpp"

QImage game::Place::BGImage() const
{
    return m_BGImage;
}

void game::Place::setBGImage(const QImage &BGImage)
{
    m_BGImage = BGImage;
}

std::vector<game::fishplaceinfo_t> game::Place::Fishes() const
{
    return m_Fishes;
}

void game::Place::setFishes(const std::vector<game::fishplaceinfo_t> &Fishes)
{
    m_Fishes = Fishes;
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
