#ifndef NOTSELECTEDEXCEPTION_H
#define NOTSELECTEDEXCEPTION_H

#include <exception>

namespace game {

class NotSelectedException
{
    const char* m_Msg;
public:
    NotSelectedException(const char *a_Msg);
    ~NotSelectedException();
    const char* what() const noexcept;
};

} // namespace game

#endif // NOTSELECTEDEXCEPTION_H
