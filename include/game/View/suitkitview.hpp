#ifndef SUITKITVIEW_H
#define SUITKITVIEW_H

#include <QWidget>

namespace game {

class SuitkitView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit SuitkitView(QWidget *a_Parent =0);
    ~SuitkitView();
};

} // namespace game

#endif // SUITKITVIEW_H
