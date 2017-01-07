#ifndef BLACKMARKETVIEW_H
#define BLACKMARKETVIEW_H

#include <QWidget>

namespace game {

class BlackMarketView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit BlackMarketView(QWidget *a_Parent =0);
    ~BlackMarketView();
};

} // namespace game

#endif // BLACKMARKETVIEW_H
