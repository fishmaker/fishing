#ifndef IHOOK_H
#define IHOOK_H

#include "game/common.hpp"

namespace game {

class IHook
{
public:
    typedef enum : i32 {
        HS_SMALL = 0,
        HS_NORMAL,
        HS_BIG,
        HS_VERYBIG,
    } hooksize_e;

protected:
    hooksize_e  m_Size;

public:
    IHook();
    virtual ~IHook();

    hooksize_e Size() const;
    void setSize(const hooksize_e &Size);
};

} // namespace game

#endif // IHOOK_H
