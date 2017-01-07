#ifndef PLAYERSINFOCONTROLLER_H
#define PLAYERSINFOCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/playersinfoview.hpp"

namespace game {

class PlayersInfoController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit PlayersInfoController(QWidget *a_Parent =0);
    ~PlayersInfoController();

    void Startup();
    void Endup();

private:
    PlayersInfoView        *m_View;
};

} // namespace game

#endif // PLAYERSINFOCONTROLLER_H

