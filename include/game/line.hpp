#ifndef LINE_H
#define LINE_H

#include "game/common/common.hpp"
#include "game/igameitem.hpp"

namespace game {

class Line : public IGameItem
{
    u32 m_Length;
    r64 m_MaxWeight;

public:
    explicit Line();
    ~Line();

    u32 Length() const;
    void setLength(const u32 &Length);

    r64 MaxWeight() const;
    void setMaxWeight(const r64 &MaxWeight);
};

} // namespace game

#endif // LINE_H
