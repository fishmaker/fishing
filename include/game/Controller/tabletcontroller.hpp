#ifndef TABLETCONTROLLER_H
#define TABLETCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/tabletview.hpp"

namespace game {

class TabletController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit TabletController(QWidget *a_Parent =0);
    ~TabletController();

    void Startup();
    void Endup();

private:
    TabletView        *m_View;
};

} // namespace game

#endif // TABLETCONTROLLER_H
