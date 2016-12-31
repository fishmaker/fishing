#include "game/fish.hpp"

game::catchclass_e game::Fish::CatchClass() const
{
    return m_CatchClass;
}

void game::Fish::setCatchClass(const game::catchclass_e &CatchClass)
{
    m_CatchClass = CatchClass;
}

game::Fish::Fish()
{
    
}

game::Fish::~Fish()
{
    
}
