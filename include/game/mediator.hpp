#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>

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
    void OnWelcomeKey0_Clicked();           // WelcomeView -> Single Player
    void OnSelectPlayerKey0_Clicked();      // SelectPlayer -> Play
    void OnSelectPlayerKey1_Clicked();      // SelectPlayer -> Registration

public:
    void Start();

private:
    DefaultWindow       *m_ParentWindow;
    QObject             *m_Forms[FN_BOUND];
};

} // namespace game

#endif // MEDIATOR_H
