#ifndef ITEMSVIEW_H
#define ITEMSVIEW_H

#include <QWidget>

#include "game/common/globalsettings.hpp"

namespace game {

class ItemsView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit ItemsView(QWidget *parent = 0);
    ~ItemsView();

};

} // namespace game

#endif // ITEMSVIEW_H
