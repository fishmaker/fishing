#ifndef LOBBYVIEW_H
#define LOBBYVIEW_H

#include <QWidget>

namespace game {

class LobbyView: public QWidget
{
    Q_OBJECT

public:
    LobbyView(QWidget *parent = 0);
    ~LobbyView();
};

} // namespace game

#endif // LOBBYVIEW_H
