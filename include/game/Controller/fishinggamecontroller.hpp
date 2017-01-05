#ifndef FISHINGGAMECONTROLLER_H
#define FISHINGGAMECONTROLLER_H

#include <QObject>
#include <QWidget>
#include <QTimer>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/fishinggameview.hpp"
#include "game/Model/fishinggamemodel.hpp"

namespace game {

class FishingGameController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit FishingGameController(QWidget *a_Parent=0);
    ~FishingGameController();

    void Startup();
    void Endup();



private:
    QTimer  m_Timer;        // Таймер клавиатуры

    FishingGameView     *m_View;
    FishingGameModel    *m_Model;
};

} // namespace game

#endif // FISHINGGAMECONTROLLER_H
