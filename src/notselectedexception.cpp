#include "game/Exceptions/notselectedexception.hpp"

game::NotSelectedException::NotSelectedException(const char *a_Msg)
    : m_Msg(a_Msg)
{

}

game::NotSelectedException::~NotSelectedException()
{

}

const char* game::NotSelectedException::what() const noexcept
{
    return this->m_Msg;
}
