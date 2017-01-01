#ifndef SPOON_H
#define SPOON_H

#include "game/Interfaces/ihook.hpp"
#include "game/Interfaces/igameitem.hpp"

namespace game {

class Spoon : public IHook, public IGameItem
{
    // TODO: Vob, Vib, Spinner .. etc..
public:
    explicit Spoon();
    ~Spoon();
};

} // namespace game

#endif // SPOON_H
