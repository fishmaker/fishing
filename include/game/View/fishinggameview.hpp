#ifndef FISHINGGAMEVIEW_H
#define FISHINGGAMEVIEW_H

#include <QMap>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QProgressBar>
#include <QSlider>
#include <QCheckBox>
#include <QKeyEvent>
// TODO: poplavok + udiliwe

#include "game/common/globalsettings.hpp"
#include "game/Items/fishingset.hpp"

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

    QMap<i32, bool> m_Keys;


signals:
    void Sig_Rod_Thrown(FishingSet*);

public slots:

private:
    void keyPressEvent(QKeyEvent *a_Event);
    void keyReleaseEvent(QKeyEvent *a_Event);



public:
    void Setup();

    explicit FishingGameView(QWidget *a_Parent=0);
    ~FishingGameView();
};

} // namespace game

#endif // FISHINGGAMEVIEW_H
