#ifndef LOBBYCONTROLLER_H
#define LOBBYCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/lobbyview.hpp"

namespace game {

class LobbyController : public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit LobbyController(QWidget *a_Parent = 0);
    ~LobbyController();

    void Startup();
    void Endup();

signals:
    void Sig_Key0_Clicked();    // Select Place
    void Sig_Key1_Clicked();    // Shop
    void Sig_Key2_Clicked();    // Sell fish
    void Sig_Key3_Clicked();    // Travel
    void Sig_Key4_Clicked();    // Food
    void Sig_Key5_Clicked();    // Settings
    void Sig_Key6_Clicked();    // Exit

public slots:
    void OnKey0_Clicked();
    void OnKey1_Clicked();
    void OnKey2_Clicked();
    void OnKey3_Clicked();
    void OnKey4_Clicked();
    void OnKey5_Clicked();
    void OnKey6_Clicked();


private:
    LobbyView *m_View;
};

} // namespace game

#endif // LOBBYCONTROLLER_H
