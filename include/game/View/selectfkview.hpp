#ifndef SELECTFKVIEW_H
#define SELECTFKVIEW_H

#include <QWidget>

namespace game {

class SelectFKView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit SelectFKView(QWidget *a_Parent =0);
    ~SelectFKView();
};

} // namespace game

#endif // SELECTFKVIEW_H
