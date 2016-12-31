#ifndef NOTENOUGHEXCEPTION_H
#define NOTENOUGHEXCEPTION_H

#include <exception>

namespace game {

class NotEnoughException : public std::exception
{
    const char* m_Msg;
public:
    NotEnoughException(const char *a_Msg);
    ~NotEnoughException();
    const char* what() const noexcept;
};

} // namespace game

#endif // NOTENOUGHEXCEPTION_H
