#ifndef SELECTPLAYERVIEW_H
#define SELECTPLAYERVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>

namespace game {

class SelectPlayerView : public QWidget
{
    Q_OBJECT

public:
    QComboBox   m_ComboBox[1];
    QLabel  m_Labels[1];
    QPushButton m_Buttons[2];

public:
    SelectPlayerView(QWidget *a_Parent = 0);
    ~SelectPlayerView();

    void Setup();

};

} // namespace game

#endif // SELECTPLAYERVIEW_H
