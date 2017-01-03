#ifndef DEFAULTWINDOW_H
#define DEFAULTWINDOW_H

#include <QWidget>
#include <QVBoxLayout>

namespace game {

class DefaultWindow : public QWidget
{
    Q_OBJECT

public:
    DefaultWindow(QWidget *parent = 0);
    ~DefaultWindow();

    QVBoxLayout* GetLayout();

private:
    QVBoxLayout m_Layout;
};

} // namespace game

#endif // DEFAULTWINDOW_H
