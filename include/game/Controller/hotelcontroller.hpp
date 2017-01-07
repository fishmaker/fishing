#ifndef HOTELCONTROLLER_H
#define HOTELCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/hotelview.hpp"

namespace game {

class HotelController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit HotelController(QWidget *a_Parent =0);
    ~HotelController();

    void Startup();
    void Endup();

private:
    HotelView        *m_View;
};

} // namespace game

#endif // HOTELCONTROLLER_H
