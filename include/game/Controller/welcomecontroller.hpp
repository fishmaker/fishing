#ifndef WELCOMECONTROLLER_H
#define WELCOMECONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/welcomeview.hpp"

namespace game {

class WelcomeController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit WelcomeController(QWidget *a_Parent=0);
    ~WelcomeController();

    void Startup();
    void Endup();

signals:
    void Sig_Key0_Clicked();

private slots:
    void OnKey0_Clicked();
    void OnKey1_Clicked();
    void OnKey2_Clicked();
    void OnKey3_Clicked();
    void OnKey4_Clicked();

private:
    WelcomeView     *m_View;
};

} // namespace game

#endif // WELCOMECONTROLLER_H
