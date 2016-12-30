#ifndef FISH_H
#define FISH_H

#include "game/common.hpp"
#include "game/ibasiccatch.hpp"
#include "game/catchtypes.hpp"

namespace game {

class Fish : public IBasicCatch
{
    catchclass_e    m_CatchClass;

public:
    Fish();
    ~Fish();
};

} // namespace game

#endif // FISH_H
