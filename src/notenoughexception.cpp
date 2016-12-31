#include "game/Exceptions/notenoughexception.hpp"

game::NotEnoughException::NotEnoughException(const char *a_Msg)
    : m_Msg(a_Msg)
{

}

game::NotEnoughException::~NotEnoughException()
{

}

const char* game::NotEnoughException::what() const noexcept
{
    return this->m_Msg;
}
