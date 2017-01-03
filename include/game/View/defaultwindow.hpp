#ifndef DEFAULTWINDOW_H
#define DEFAULTWINDOW_H

#include <QWidget>

namespace game {

class DefaultWindow : public QWidget
{
    Q_OBJECT

public:
    DefaultWindow(QWidget *parent = 0);
    ~DefaultWindow();

};

} // namespace game

#endif // DEFAULTWINDOW_H
