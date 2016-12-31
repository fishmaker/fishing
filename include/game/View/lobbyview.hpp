#ifndef LOBBYVIEW_HPP
#define LOBBYVIEW_HPP

#include <QWidget>

namespace Ui {
class LobbyView;
}

class LobbyView : public QWidget
{
    Q_OBJECT

public:
    explicit LobbyView(QWidget *parent = 0);
    ~LobbyView();

private:
    Ui::LobbyView *ui;
};

#endif // LOBBYVIEW_HPP
