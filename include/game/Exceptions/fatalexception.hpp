#ifndef FATALEXCEPTION_H
#define FATALEXCEPTION_H

#include <exception>

namespace game {

class FatalException : public std::exception
{
    const char *m_Msg;
public:
    FatalException(const char*);
    ~FatalException();
    const char* what() const noexcept;
};

} // namespace game

#endif // FATALEXCEPTION_H
