#ifndef WELCOMEVIEW_H
#define WELCOMEVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QPalette>

#include "game/common/globalsettings.hpp"

namespace game {

class WelcomeView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

    QPushButton m_PushButtons[5];
    QLabel m_Labels[1];

public:
    explicit WelcomeView(QWidget *parent = 0);
    ~WelcomeView();

private:
    QPalette m_Palette;
};

} // namespace game

#endif // WELCOMEVIEW_H
