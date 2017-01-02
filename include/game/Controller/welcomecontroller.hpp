#ifndef WELCOMECONTROLLER_H
#define WELCOMECONTROLLER_H

#include "game/Interfaces/iformbase.hpp"
#include "game/Model/welcomemodel.hpp"
#include "game/View/welcomeview.hpp"

namespace game {

class WelcomeController : public IFormBase
{
public:
    explicit WelcomeController();
    virtual ~WelcomeController();

    void Startup();
    void Endup();

    void Show();
    void Hide();


private:
    WelcomeModel    *m_Model;
    WelcomeView     *m_View;
};

} // namespace game

#endif // WELCOMECONTROLLER_H
