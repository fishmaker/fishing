#ifndef CONFIRMVIEW_H
#define CONFIRMVIEW_H

#include <QWidget>

namespace game {

class ConfirmView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit ConfirmView(QWidget *a_Parent =0);
    ~ConfirmView();
};

} // namespace game

#endif // CONFIRMVIEW_H
