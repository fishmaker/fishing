#ifndef IHOOK_H
#define IHOOK_H

#include "game/common/common.hpp"

namespace game {

typedef enum : i32 {
    HS_SMALL = 0,
    HS_NORMAL,
    HS_BIG,
    HS_VERYBIG,
} hooksize_e;

typedef enum : i32 {
    SS_STRONG,
    SS_WEAK,
    SS_VERYSTRONG,
    SS_GOOD,
} hookstrength_e;

class IHook
{
public:
    IHook();
    virtual ~IHook();

    hooksize_e Size() const;
    void setSize(const hooksize_e &Size);

protected:
    hooksize_e  m_Size;
};

} // namespace game

#endif // IHOOK_H
