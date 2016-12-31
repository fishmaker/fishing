#ifndef SHOPVIEW_HPP
#define SHOPVIEW_HPP

#include <QWidget>

namespace Ui {
class ShopView;
}

class ShopView : public QWidget
{
    Q_OBJECT

public:
    explicit ShopView(QWidget *parent = 0);
    ~ShopView();

private:
    Ui::ShopView *ui;
};

#endif // SHOPVIEW_HPP
