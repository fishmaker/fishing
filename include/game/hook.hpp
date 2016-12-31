#ifndef HOOK_H
#define HOOK_H

#include "game/ihook.hpp"
#include "game/igameitem.hpp"

namespace game {

class Hook : public IHook, public IGameItem
{
public:
    typedef enum : i32 {
        SS_STRONG,
        SS_WEAK,
        SS_VERYSTRONG,
        SS_GOOD,
    } hookstrength_e;

private:
    hookstrength_e  m_Strength;

public:
    explicit Hook();
    ~Hook();

    hookstrength_e Strength() const;
    void setStrength(const hookstrength_e &Strength);
};

} // namespace game

#endif // HOOK_H
