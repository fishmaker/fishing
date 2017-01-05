#ifndef FISHINGGAMEVIEW_H
#define FISHINGGAMEVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QProgressBar>
#include <QSlider>
#include <QCheckBox>
// TODO: poplavok + udiliwe

#include "game/common/globalsettings.hpp"

namespace game {

class FishingGameView : public QWidget
{
    Q_OBJECT

public:
    QGraphicsView m_GViews[5];
    QLabel m_Labels[20];
    QProgressBar m_Bars[20];
    QPushButton m_Buttons[10];
    QSlider m_Slider[1];
    QCheckBox m_CheckBox[1];

public:
    void Setup();

    explicit FishingGameView(QWidget *a_Parent=0);
    ~FishingGameView();
};

} // namespace game

#endif // FISHINGGAMEVIEW_H
