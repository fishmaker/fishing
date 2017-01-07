#ifndef FISHPONDVIEW_H
#define FISHPONDVIEW_H

#include <QWidget>

namespace game {

class FishpondView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit FishpondView(QWidget *a_Parent =0);
    ~FishpondView();
};

} // namespace game

#endif // FISHPONDVIEW_H
