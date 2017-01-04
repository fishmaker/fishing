#ifndef FISHINGGAMEVIEW_H
#define FISHINGGAMEVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

#include "game/common/globalsettings.hpp"

namespace game {

class FishingGameView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

    explicit FishingGameView(QWidget *a_Parent=0);
    ~FishingGameView();
};

} // namespace game

#endif // FISHINGGAMEVIEW_H
