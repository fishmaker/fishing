#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "game/iformbase.hpp"
#include "game/location.hpp"
#include "game/place.hpp"

namespace game {

class GameEngine
{
    IFormBase::formname_e   m_CurrentForm;
    IFormBase               *m_ArrayOfForms[IFormBase::FN_BOUND];
    Location                m_CurrentLocation;
    Place                   m_Place;

public:
    explicit GameEngine();
    ~GameEngine();
};

} // namespace game

#endif // GAMEENGINE_H
