#ifndef LOBBYVIEW_H
#define LOBBYVIEW_H

#include <QWidget>
#include <QLabel>
#include <QPalette>

#include "game/common/globalsettings.hpp"

namespace game {

class LobbyView: public QWidget
{
    Q_OBJECT

public:
    QLabel m_Labels[10];

public:
    void Setup();

    LobbyView(QWidget *parent = 0);
    ~LobbyView();

private:
    QPalette m_Palette;
};

} // namespace game

#endif // LOBBYVIEW_H
