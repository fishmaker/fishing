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
#include <QBrush>
// TODO: poplavok + udiliwe

#include "game/common/globalsettings.hpp"
#include "game/Items/fishingset.hpp"
#include "game/graphicsview.hpp"

namespace game {

class FishingGameView : public QWidget
{
    Q_OBJECT

public:
    QGraphicsScene m_GameScene[4];
    game::GraphicsView m_GameView;
    QGraphicsView m_GViews[5];  // TODO: [0] currently not used -> delete or do smthing
    QLabel m_Labels[20];
    QProgressBar m_Bars[20];
    QPushButton m_Buttons[10];
    QSlider m_Slider[1];
    QCheckBox m_CheckBox[1];
    QMap<i32, bool> m_Keys;
    QBrush m_BG;

signals:
    void Sig_Rod_Thrown(FishingSet*);

public slots:

private:
    void keyPressEvent(QKeyEvent *a_Event);
    void keyReleaseEvent(QKeyEvent *a_Event);

public:
    void SetBG(const QImage &a_BG);
    void Setup();

    explicit FishingGameView(QWidget *a_Parent=0);
    ~FishingGameView();
};

} // namespace game

#endif // FISHINGGAMEVIEW_H
