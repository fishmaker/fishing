#include "game/fish.h"

catchclass_e Fish::CatchClass() const
{
    return m_CatchClass;
}

void Fish::setCatchClass(const catchclass_e &CatchClass)
{
    m_CatchClass = CatchClass;
}

game::Fish::Fish()
{
    
}

game::Fish::~Fish()
{
    
}
