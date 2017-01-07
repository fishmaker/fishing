#ifndef EVENTSCONTROLLER_H
#define EVENTSCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/eventview.hpp"

namespace game {

class EventsController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit EventsController(QWidget *a_Parent =0);
    ~EventsController();

    void Startup();
    void Endup();

private:
    EventView        *m_View;
};

} // namespace game

#endif // EVENTSCONTROLLER_H

