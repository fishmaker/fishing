#ifndef FISHACTIONSVIEW_H
#define FISHACTIONSVIEW_H

#include <QWidget>

namespace game {

class FishActionsView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit FishActionsView(QWidget *a_Parent =0);
    ~FishActionsView();
};

} // namespace game

#endif // FISHACTIONSVIEW_H
