#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QWidget>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsScene>

namespace game {

class GraphicsView : public QGraphicsView
{
    Q_OBJECT

public:
    explicit GraphicsView(QWidget *a_Parent = 0);
    ~GraphicsView();

signals:

public slots:
    void mousePressEvent(QMouseEvent *);

private:
    QGraphicsScene *scene;

};

} // namespace game

#endif // GRAPHICSVIEW_H
