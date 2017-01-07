#ifndef HOTELVIEW_H
#define HOTELVIEW_H

#include <QWidget>

namespace game {

class HotelView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit HotelView(QWidget *a_Parent =0);
    ~HotelView();
};

} // namespace game

#endif // HOTELVIEW_H

