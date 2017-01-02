#ifndef WELCOMECONTROLLER_H
#define WELCOMECONTROLLER_H

#include "game/Model/welcomemodel.hpp"

namespace game {

class WelcomeView;

class WelcomeController
{
public:
    explicit WelcomeController();
    virtual ~WelcomeController();

    void setModel(WelcomeModel *Model);

    void setView(WelcomeView *View);

private:
    WelcomeModel *m_Model;
    WelcomeView *m_View;
};

} // namespace game

#endif // WELCOMECONTROLLER_H
