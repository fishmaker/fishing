#include "game/Exceptions/incorrectexception.hpp"

game::IncorrectException::IncorrectException(const char *a_Msg)
    : m_Msg(a_Msg)
{

}

game::IncorrectException::~IncorrectException()
{

}

const char* game::IncorrectException::what() const noexcept
{
    return this->m_Msg;
}
