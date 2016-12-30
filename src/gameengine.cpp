#include "game/gameengine.hpp"

IFormBase::formname_e GameEngine::CurrentForm() const
{
    return m_CurrentForm;
}

void GameEngine::setCurrentForm(const IFormBase::formname_e &CurrentForm)
{
    m_CurrentForm = CurrentForm;
}

Location GameEngine::CurrentLocation() const
{
    return m_CurrentLocation;
}

void GameEngine::setCurrentLocation(const Location &CurrentLocation)
{
    m_CurrentLocation = CurrentLocation;
}

Place GameEngine::Place() const
{
    return m_Place;
}

void GameEngine::setPlace(const Place &Place)
{
    m_Place = Place;
}

game::GameEngine::GameEngine()
{
    
}

game::GameEngine::~GameEngine()
{
    
}
