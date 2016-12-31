#ifndef SELLFISHVIEW_HPP
#define SELLFISHVIEW_HPP

#include <QWidget>

namespace Ui {
class SellFishView;
}

class SellFishView : public QWidget
{
    Q_OBJECT

public:
    explicit SellFishView(QWidget *parent = 0);
    ~SellFishView();

private:
    Ui::SellFishView *ui;
};

#endif // SELLFISHVIEW_HPP
