#include "game/rod.hpp"

game::u32 game::Rod::Depth() const
{
    return m_Depth;
}

void game::Rod::setDepth(const game::u32 &Depth)
{
    m_Depth = Depth;
}

game::rodactions_e game::Rod::Actions() const
{
    return m_Actions;
}

void game::Rod::setActions(const game::rodactions_e &Actions)
{
    m_Actions = Actions;
}

game::Rod::Rod()
{
    
}

game::Rod::~Rod()
{
    
}
