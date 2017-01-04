#ifndef CREATEPLAYERCONTROLLER_H
#define CREATEPLAYERCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/createplayerview.hpp"

namespace game {

class CreatePlayerController  :  public QObject, public IFormBase
{
    Q_OBJECT

signals:
    void Sig_Key0_Clicked();

public slots:
    void OnKey0_Clicked();

public:
    explicit CreatePlayerController(QWidget *a_Parent =0);
    ~CreatePlayerController();

    void Startup();
    void Endup();

private:
    CreatePlayerView    *m_View;
};

} // namespace game

#endif // CREATEPLAYERCONTROLLER_H
