#ifndef TOURNAMENTCONTROLLER_H
#define TOURNAMENTCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/tournamentview.hpp"

namespace game {

class TournamentController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit TournamentController(QWidget *a_Parent =0);
    ~TournamentController();

    void Startup();
    void Endup();

private:
    TournamentView        *m_View;
};

} // namespace game

#endif // TOURNAMENTCONTROLLER_H

