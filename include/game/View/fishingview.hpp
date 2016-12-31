#ifndef FISHINGVIEW_HPP
#define FISHINGVIEW_HPP

#include <QWidget>

namespace Ui {
class FishingView;
}

class FishingView : public QWidget
{
    Q_OBJECT

public:
    explicit FishingView(QWidget *parent = 0);
    ~FishingView();

private:
    Ui::FishingView *ui;
};

#endif // FISHINGVIEW_HPP
