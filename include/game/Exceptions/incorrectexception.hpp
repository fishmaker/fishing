#ifndef INCORRECTEXCEPTION_H
#define INCORRECTEXCEPTION_H

#include <exception>

namespace game {

class IncorrectException
{
    const char *m_Msg;
public:
    IncorrectException(const char *a_Msg);
    ~IncorrectException();
    const char* what() const noexcept;
};

} // namespace game

#endif // INCORRECTEXCEPTION_H
