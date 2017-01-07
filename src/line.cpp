#include "game/Items/line.hpp"

game::u32 game::Line::Length() const
{
    return m_Length;
}

void game::Line::setLength(const game::u32 &Length)
{
    m_Length = Length;
}

game::r64 game::Line::MaxWeight() const
{
    return m_MaxWeight;
}

void game::Line::setMaxWeight(const game::r64 &MaxWeight)
{
    m_MaxWeight = MaxWeight;
}

game::Line::Line()
{

}

game::Line::~Line()
{

}
