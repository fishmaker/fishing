#ifndef SELECTPLACEVIEW_HPP
#define SELECTPLACEVIEW_HPP

#include <QWidget>

namespace Ui {
class SelectPlaceView;
}

class SelectPlaceView : public QWidget
{
    Q_OBJECT

public:
    explicit SelectPlaceView(QWidget *parent = 0);
    ~SelectPlaceView();

private:
    Ui::SelectPlaceView *ui;
};

#endif // SELECTPLACEVIEW_HPP
