#ifndef WELCOMEVIEW_H
#define WELCOMEVIEW_H

#include <QWidget>

#include "game/Model/welcomemodel.hpp"

namespace Ui {
class WelcomeView;
}

namespace game {

class WelcomeView : public QWidget
{
    Q_OBJECT

public:
    explicit WelcomeView(QWidget *parent = 0);
    ~WelcomeView();

    void setModel(WelcomeModel *Model);

private:
    WelcomeModel *m_Model;
};

} // namespace game

#endif // WELCOMEVIEW_H
