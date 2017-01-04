#ifndef SHOPVIEW_H
#define SHOPVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

#include "game/common/globalsettings.hpp"

namespace game {

class ShopView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

    explicit ShopView(QWidget *a_Parent =0);
    ~ShopView();
};

} // namespace game

#endif // SHOPVIEW_H
