#ifndef SELLFISHVIEW_H
#define SELLFISHVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QImage>

#include "game/common/globalsettings.hpp"

namespace game {

class SellFishView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

    explicit SellFishView(QWidget *a_Parent =0);
    ~SellFishView();
};

} // namespace game

#endif // SELLFISHVIEW_H
