#include "game/hook.hpp"

game::Hook::hookstrength_e game::Hook::Strength() const
{
    return m_Strength;
}

void game::Hook::setStrength(const game::Hook::hookstrength_e &Strength)
{
    m_Strength = Strength;
}

game::Hook::Hook()
{

}

game::Hook::~Hook()
{

}
