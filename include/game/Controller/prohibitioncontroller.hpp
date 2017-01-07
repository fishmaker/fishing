#ifndef PROHIBITIONCONTROLLER_H
#define PROHIBITIONCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/prohibitionview.hpp"

namespace game {

class ProhibitionController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit ProhibitionController(QWidget *a_Parent =0);
    ~ProhibitionController();

    void Startup();
    void Endup();

private:
    ProhibitionView        *m_View;
};

} // namespace game

#endif // PROHIBITIONCONTROLLER_H
