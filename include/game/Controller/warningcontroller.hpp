#ifndef WARNINGCONTROLLER_H
#define WARNINGCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/warningview.hpp"

namespace game {

class WarningController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit WarningController(QWidget *a_Parent =0);
    ~WarningController();

    void Startup();
    void Endup();

private:
    WarningView        *m_View;
};

} // namespace game

#endif // WARNINGCONTROLLER_H
