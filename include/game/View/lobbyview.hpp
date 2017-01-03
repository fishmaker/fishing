#ifndef LOBBYVIEW_H
#define LOBBYVIEW_H

#include <QWidget>
#include <QLabel>

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
};

} // namespace game

#endif // LOBBYVIEW_H
