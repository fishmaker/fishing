#ifndef SELECTPLAYERCONTROLLER_H
#define SELECTPLAYERCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/selectplayerview.hpp"

namespace game {

class SelectPlayerController : public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit SelectPlayerController(QWidget *a_Parent=0);
    ~SelectPlayerController();

    void Startup();
    void Endup();

signals:
    void Sig_Key0_Clicked();
    void Sig_Key1_Clicked();

public slots:
    void OnKey0_Clicked();
    void OnKey1_Clicked();

private:
    SelectPlayerView        *m_View;
};

} // namespace game

#endif // SELECTPLAYERCONTROLLER_H
