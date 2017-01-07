#ifndef ERRORCONTROLLER_H
#define ERRORCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/errorview.hpp"

namespace game {

class ErrorController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit ErrorController(QWidget *a_Parent =0);
    ~ErrorController();

    void Startup();
    void Endup();

private:
    ErrorView        *m_View;
};

} // namespace game

#endif // ERRORCONTROLLER_H
