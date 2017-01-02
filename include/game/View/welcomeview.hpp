#ifndef WELCOMEVIEW_H
#define WELCOMEVIEW_H

#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/Model/welcomemodel.hpp"
#include "game/Controller/welcomecontroller.hpp"

namespace Ui {
class WelcomeView;
}

namespace game {

class WelcomeController;

class WelcomeView : public QWidget, public game::IFormBase
{
    Q_OBJECT

// IFormBase:
public:
    void Startup();
    void Endup();

public:
    explicit WelcomeView(QWidget *parent = 0);
    ~WelcomeView();


private:
    Ui::WelcomeView *ui;
    WelcomeModel *m_Model;
    WelcomeController *m_Controller;
};

} // namespace game

#endif // WELCOMEVIEW_H
