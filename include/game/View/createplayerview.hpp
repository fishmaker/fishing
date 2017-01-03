#ifndef CREATEPLAYERVIEW_H
#define CREATEPLAYERVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

namespace game {

class CreatePlayerView : public QWidget
{
    Q_OBJECT

public:
    QLabel m_Labels[1];
    QPushButton m_Buttons[1];
    QLineEdit m_LineEdit[1];

public:
    void Setup();

    explicit CreatePlayerView(QWidget *a_Parent =0);
    ~CreatePlayerView();
};

} // namespace game

#endif // CREATEPLAYERVIEW_H
