#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>

#include "game/player.hpp"
#include "game/Interfaces/iformbase.hpp"
#include "game/View/defaultwindow.hpp"

namespace game {

class Mediator : public QObject
{
    Q_OBJECT

public:
    explicit Mediator();
    ~Mediator();

public slots:
    void OnWelcomeKey0_Clicked(); // WelcomeView -> Single Player

public:
    void Start();

    Player *GetPlayer();

private:
    Player           *m_MainPlayer; // TODO: перенести в модель, а модель сюда
    formname_e       m_CurrentHolder; // Текущий вид на default форме
    DefaultWindow    *m_ParentWindow;
    QObject         *m_Forms[FN_BOUND];
};

} // namespace game

#endif // MEDIATOR_H
