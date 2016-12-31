#include "game/ihook.hpp"

game::IHook::IHook()
{

}

game::IHook::~IHook()
{

}

game::IHook::hooksize_e game::IHook::Size() const
{
    return m_Size;
}

void game::IHook::setSize(const game::IHook::hooksize_e &Size)
{
    m_Size = Size;
}
