#ifndef HOOK_H
#define HOOK_H

#include "game/ihook.hpp"
#include "game/igameitem.hpp"

namespace game {

class Hook : public IHook, public IGameItem
{
    hookstrength_e  m_Strength;

public:
    explicit Hook();
    ~Hook();

    hookstrength_e Strength() const;
    void setStrength(const hookstrength_e &Strength);
};

} // namespace game

#endif // HOOK_H
