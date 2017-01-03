#ifndef WELCOMEVIEW_H
#define WELCOMEVIEW_H

#include <QWidget>

namespace game {

class WelcomeView : public QWidget
{
    Q_OBJECT

public:
    explicit WelcomeView(QWidget *parent = 0);
    ~WelcomeView();

};

} // namespace game

#endif // WELCOMEVIEW_H
