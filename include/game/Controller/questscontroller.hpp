#ifndef QUESTSCONTROLLER_H
#define QUESTSCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/questsview.hpp"

namespace game {

class QuestsController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit QuestsController(QWidget *a_Parent =0);
    ~QuestsController();

    void Startup();
    void Endup();

private:
    QuestsView        *m_View;
};

} // namespace game

#endif // QUESTSCONTROLLER_H

