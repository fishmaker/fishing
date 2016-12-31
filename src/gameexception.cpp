#include "game/Exceptions/gameexception.hpp"

game::GameException::GameException(const char *a_Msg)
    : m_Msg(a_Msg)
{

}

game::GameException::~GameException()
{

}

const char* game::GameException::what() const noexcept
{
    return this->m_Msg;
}
