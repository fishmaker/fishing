#ifndef SHOPCONTROLLER_H
#define SHOPCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/shopview.hpp"

namespace game {

class ShopController : public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit ShopController(QWidget *a_Parent =0);
    ~ShopController();

    void Startup();
    void Endup();

private:
    ShopView        *m_View;
};

} // namespace game

#endif // SHOPCONTROLLER_H
