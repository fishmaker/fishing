#ifndef WARNINGVIEW_H
#define WARNINGVIEW_H

#include <QWidget>

namespace game {

class WarningView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit WarningView(QWidget *a_Parent =0);
    ~WarningView();
};

} // namespace game

#endif // WARNINGVIEW_H
