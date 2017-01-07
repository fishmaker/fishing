#ifndef PROHIBITIONVIEW_H
#define PROHIBITIONVIEW_H

#include <QWidget>

namespace game {

class ProhibitionView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit ProhibitionView(QWidget *a_Parent =0);
    ~ProhibitionView();
};

} // namespace game

#endif // PROHIBITIONVIEW_H
