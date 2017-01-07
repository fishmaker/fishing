#ifndef SELECTFKCONTROLLER_H
#define SELECTFKCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/selectfkview.hpp"

namespace game {

class SelectFKController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit SelectFKController(QWidget *a_Parent =0);
    ~SelectFKController();

    void Startup();
    void Endup();

private:
    SelectFKView        *m_View;
};

} // namespace game

#endif // SELECTFKCONTROLLER_H
