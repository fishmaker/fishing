#ifndef GAMEEXCEPTION_H
#define GAMEEXCEPTION_H

#include <exception>

namespace game {

// Чисто в логике игры
class GameException : public std::exception
{
    const char *m_Msg;
public:
    GameException(const char*);
    ~GameException();
    const char* what() const noexcept;
};

} // namespace game

#endif // GAMEEXCEPTION_H
