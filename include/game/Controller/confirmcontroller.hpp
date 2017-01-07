#ifndef CONFIRMCONTROLLER_H
#define CONFIRMCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/confirmview.hpp"

namespace game {

class ConfirmController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit ConfirmController(QWidget *a_Parent =0);
    ~ConfirmController();

    void Startup();
    void Endup();

private:
    ConfirmView        *m_View;
};

} // namespace game

#endif // CONFIRMCONTROLLER_H

