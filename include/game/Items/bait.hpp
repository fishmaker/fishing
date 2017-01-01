#ifndef BAIT_H
#define BAIT_H

#include "game/common/common.hpp"
#include "game/Interfaces/igameitem.hpp"

namespace game {

class Bait : public IGameItem
{
public:
    explicit Bait();
    ~Bait();
};

} // namespace game

#endif // BAIT_H
