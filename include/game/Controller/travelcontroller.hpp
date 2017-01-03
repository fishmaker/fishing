#ifndef TRAVELCONTROLLER_H
#define TRAVELCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/travelview.hpp"

namespace game {

class TravelController : public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit TravelController(QWidget *a_Parent =0);
    ~TravelController();

    void Startup();
    void Endup();

private:
    TravelView      *m_View;
};

} // namespace game

#endif // TRAVELCONTROLLER_H
