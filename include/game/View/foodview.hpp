#ifndef FOODVIEW_H
#define FOODVIEW_H

#include <QWidget>

namespace game {

class FoodView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit FoodView(QWidget *a_Parent =0);
    ~FoodView();
};

} // namespace game

#endif // FOODVIEW_H
