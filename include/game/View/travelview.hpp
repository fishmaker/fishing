#ifndef TRAVELVIEW_HPP
#define TRAVELVIEW_HPP

#include <QWidget>

namespace Ui {
class TravelView;
}

class TravelView : public QWidget
{
    Q_OBJECT

public:
    explicit TravelView(QWidget *parent = 0);
    ~TravelView();

private:
    Ui::TravelView *ui;
};

#endif // TRAVELVIEW_HPP
