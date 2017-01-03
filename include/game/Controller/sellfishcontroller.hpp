#ifndef SELLFISHCONTROLLER_H
#define SELLFISHCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/sellfishview.hpp"

namespace game {

class SellFishController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit SellFishController(QWidget *a_Parent =0);
    ~SellFishController();

    void Startup();
    void Endup();

private:
    SellFishView        *m_View;
};

} // namespace game

#endif // SELLFISHCONTROLLER_H
