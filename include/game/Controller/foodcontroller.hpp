#ifndef FOODCONTROLLER_H
#define FOODCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/foodview.hpp"

namespace game {

class FoodController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit FoodController(QWidget *a_Parent =0);
    ~FoodController();

    void Startup();
    void Endup();

private:
    FoodView        *m_View;
};

} // namespace game

#endif // FOODCONTROLLER_H
