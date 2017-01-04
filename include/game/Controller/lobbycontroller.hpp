#ifndef LOBBYCONTROLLER_H
#define LOBBYCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/lobbyview.hpp"

namespace game {

class LobbyController : public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit LobbyController(QWidget *a_Parent = 0);
    ~LobbyController();

    void Startup();
    void Endup();

private:
    LobbyView *m_View;
};

} // namespace game

#endif // LOBBYCONTROLLER_H
