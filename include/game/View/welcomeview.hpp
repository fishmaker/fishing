#ifndef WELCOMEVIEW_H
#define WELCOMEVIEW_H

#include <QWidget>

#include "game/iformbase.hpp"

namespace Ui {
class WelcomeView;
}

class WelcomeView : public QWidget, public IFormBase
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
};

#endif // WELCOMEVIEW_H
