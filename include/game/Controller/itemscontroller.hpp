#ifndef ITEMSCONTROLLER_H
#define ITEMSCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/itemsview.hpp"

namespace game {

class ItemsController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit ItemsController(QWidget *a_Parent =0);
    ~ItemsController();

    void Startup();
    void Endup();

private:
    ItemsView        *m_View;
};

} // namespace game

#endif // ITEMSCONTROLLER_H

