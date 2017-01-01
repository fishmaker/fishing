#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "game/Interfaces/iformbase.hpp"
#include "game/World/location.hpp"
#include "game/World/place.hpp"

namespace game {

class GameEngine
{
    formname_e              m_CurrentForm;
    IFormBase               *m_ArrayOfForms[FN_BOUND];
    Location                m_CurrentLocation;
    Place                   m_Place;

public:
    explicit GameEngine();
    ~GameEngine();
};

} // namespace game

#endif // GAMEENGINE_H
