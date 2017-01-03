#ifndef TRAVELVIEW_H
#define TRAVELVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

namespace game {

class TravelView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

    explicit TravelView(QWidget *a_Parent=0);
    ~TravelView();
};

} // namespace game

#endif // TRAVELVIEW_H
