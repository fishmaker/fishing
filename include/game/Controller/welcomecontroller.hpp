#ifndef WELCOMECONTROLLER_H
#define WELCOMECONTROLLER_H

#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/welcomeview.hpp"

namespace game {

class WelcomeController : public IFormBase
{
public:
    explicit WelcomeController(QWidget *a_Parent=0);
    virtual ~WelcomeController();

    void Startup();
    void Endup();

    void Show();
    void Hide();


private:
    WelcomeView     *m_View;
};

} // namespace game

#endif // WELCOMECONTROLLER_H
