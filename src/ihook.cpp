#include "game/Interfaces/ihook.hpp"

game::IHook::IHook()
{

}

game::IHook::~IHook()
{

}

game::hooksize_e game::IHook::Size() const
{
    return m_Size;
}

void game::IHook::setSize(const game::hooksize_e &Size)
{
    m_Size = Size;
}
