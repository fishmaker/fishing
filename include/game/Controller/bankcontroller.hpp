#ifndef BANKCONTROLLER_H
#define BANKCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/bankview.hpp"

namespace game {

class BankController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit BankController(QWidget *a_Parent =0);
    ~BankController();

    void Startup();
    void Endup();

private:
    BankView        *m_View;
};

} // namespace game

#endif // BANKCONTROLLER_H
