#include "game/gameengine.hpp"

game::IFormBase::formname_e game::GameEngine::CurrentForm() const
{
    return m_CurrentForm;
}

void game::GameEngine::setCurrentForm(const game::IFormBase::formname_e &CurrentForm)
{
    m_CurrentForm = CurrentForm;
}

game::Location game::GameEngine::CurrentLocation() const
{
    return m_CurrentLocation;
}

void game::GameEngine::setCurrentLocation(const game::Location &CurrentLocation)
{
    m_CurrentLocation = CurrentLocation;
}

game::Place game::GameEngine::getPlace() const
{
    return m_Place;
}

void game::GameEngine::setPlace(const game::Place &Place)
{
    m_Place = Place;
}

game::GameEngine::GameEngine()
{
    
}

game::GameEngine::~GameEngine()
{
    
}
