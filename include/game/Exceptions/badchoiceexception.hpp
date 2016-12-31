#ifndef BADCHOICEEXCEPTION_H
#define BADCHOICEEXCEPTION_H

#include <exception>

namespace game {

// Неправильный выбор и т.д.
class BadChoiceException : public std::exception
{
    const char *m_Msg;
public:
    BadChoiceException(const char*);
    ~BadChoiceException();
    const char* what() const noexcept;
};

} // namespace game

#endif // BADCHOICEEXCEPTION_H
