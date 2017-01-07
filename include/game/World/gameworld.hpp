#ifndef GAMEWORLD_H
#define GAMEWORLD_H

#include <vector>

#include "game/World/location.hpp"

namespace game {

class GameWorld
{

public:
    std::vector<Location> m_vLocations;

public:
    explicit GameWorld();
    virtual ~GameWorld();
};

} // namespace game

#endif // GAMEWORLD_H
