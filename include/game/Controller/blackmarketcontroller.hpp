#ifndef BLACKMARKETCONTROLLER_H
#define BLACKMARKETCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/blackmarketview.hpp"

namespace game {

class BlackMarketController : public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit BlackMarketController(QWidget *a_Parent =0);
    ~BlackMarketController();

    void Startup();
    void Endup();

private:
    BlackMarketView        *m_View;
};

} // namespace game

#endif // BLACKMARKETCONTROLLER_H

