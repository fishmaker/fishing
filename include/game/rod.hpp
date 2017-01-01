#ifndef ROD_H
#define ROD_H

#include "game/common/common.hpp"
#include "game/igameitem.hpp"
#include "game/ifishingrod.hpp"

namespace game {

typedef enum : i32 {
    RA_ABORT            = 0b00000001, // выкинуть
    RA_REPAIR           = 0b00000010, // ремонтировать
    RA_SIGN             = 0b00000100, // подписать
    RA_UPGRADE          = 0b00001000, // улучшить
} rodactions_e;

class Rod : public IGameItem, public IFishingRod
{
    u32     m_Depth; // текущая глубина
    rodactions_e    m_Actions;  // Доступные действия

public:
    explicit Rod();
    ~Rod();

    u32 Depth() const;
    void setDepth(const u32 &Depth);

    rodactions_e Actions() const;
    void setActions(const rodactions_e &Actions);
};

} // namespace game

#endif // ROD_H
