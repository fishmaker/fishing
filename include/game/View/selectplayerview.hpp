#ifndef SELECTPLAYERVIEW_H
#define SELECTPLAYERVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>

#include "game/common/globalsettings.hpp"

namespace game {

class SelectPlayerView : public QWidget
{
    Q_OBJECT

public:
    QComboBox   m_ComboBox[1];
    QLabel  m_Labels[1];
    QPushButton m_Buttons[2];

    void Setup();

public:
    SelectPlayerView(QWidget *a_Parent = 0);
    ~SelectPlayerView();

};

} // namespace game

#endif // SELECTPLAYERVIEW_H
