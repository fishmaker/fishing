#include "game/Exceptions/fatalexception.hpp"

game::FatalException::FatalException(const char *a_Msg)
    : m_Msg(a_Msg)
{

}

game::FatalException::~FatalException()
{

}

const char* game::FatalException::what() const noexcept
{
    return this->m_Msg;
}
