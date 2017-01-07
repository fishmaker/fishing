#ifndef EVENTVIEW_H
#define EVENTVIEW_H

#include <QWidget>

namespace game {

class EventView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit EventView(QWidget *a_Parent =0);
    ~EventView();
};

} // namespace game

#endif // EVENTVIEW_H

