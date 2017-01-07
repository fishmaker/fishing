#include "game/Items/hook.hpp"

game::hookstrength_e game::Hook::Strength() const
{
    return m_Strength;
}

void game::Hook::setStrength(const game::hookstrength_e &Strength)
{
    m_Strength = Strength;
}

game::Hook::Hook()
{

}

game::Hook::~Hook()
{

}
