#ifndef FISHPONDCONTROLLER_H
#define FISHPONDCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/fishpondview.hpp"

namespace game {

class FishpondController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit FishpondController(QWidget *a_Parent =0);
    ~FishpondController();

    void Startup();
    void Endup();

private:
    FishpondView        *m_View;
};

} // namespace game

#endif // FISHPONDCONTROLLER_H
