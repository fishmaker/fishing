#ifndef FISHACTIONSCONTROLLER_H
#define FISHACTIONSCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/fishactionsview.hpp"

namespace game {

class FishActionsController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit FishActionsController(QWidget *a_Parent =0);
    ~FishActionsController();

    void Startup();
    void Endup();

private:
    FishActionsView        *m_View;
};

} // namespace game

#endif // FISHACTIONSCONTROLLER_H
