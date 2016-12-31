#include "game/Exceptions/badchoiceexception.hpp"

game::BadChoiceException::BadChoiceException(const char *a_Msg)
    : m_Msg(a_Msg)
{

}

game::BadChoiceException::~BadChoiceException()
{

}

const char* game::BadChoiceException::what() const noexcept
{
    return this->m_Msg;
}
