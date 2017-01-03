#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QtCore>
#include <QWidget>

#include "game/View/defaultwindow.hpp"
#include "game/player.hpp"
#include "game/Interfaces/iformbase.hpp"

namespace game {

class Mediator
{
public:
    static const QRect s_L1DIMENSIONS;
    static const QRect s_L2DIMENSIONS;
    static const QRect s_L3DIMENSIONS;

public:
    explicit Mediator();
    ~Mediator();

    Player *GetPlayer();

private:
    Player m_MainPlayer;
    QWidget *m_ParentWindow;

    IFormBase *m_L1Controller;
    IFormBase *m_L2Controller;
    IFormBase *m_L3Controller;
};

} // namespace game

#endif // MEDIATOR_H
