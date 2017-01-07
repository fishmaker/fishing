#ifndef TABLETVIEW_H
#define TABLETVIEW_H

#include <QWidget>

namespace game {

class TabletView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit TabletView(QWidget *a_Parent =0);
    ~TabletView();
};

} // namespace game

#endif // TABLETVIEW_H
