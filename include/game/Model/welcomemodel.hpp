#ifndef WELCOMEMODEL_H
#define WELCOMEMODEL_H

#include <QtCore>
#include <QWidget>
#include <QLabel>
#include <QPushButton>

#include "game/common/common.hpp"

namespace game {

class WelcomeModel
{
public:
    static const QRect s_Geometry;

public:
    explicit WelcomeModel(QWidget *a_Parent = 0);
    virtual ~WelcomeModel();

private:
    void Setup(); // Labels & buttons setup

private:
    QWidget     *m_Parent;
    QLabel      *m_Labels[10];
    QPushButton *m_Buttons[10];

};

} // namespace game

#endif // WELCOMEMODEL_H
