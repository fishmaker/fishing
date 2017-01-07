#ifndef SUITKICONTROLLER_H
#define SUITKICONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/suitkitview.hpp"

namespace game {

class SuitkitController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit SuitkitController(QWidget *a_Parent =0);
    ~SuitkitController();

    void Startup();
    void Endup();

private:
    SuitkitView        *m_View;
};

} // namespace game

#endif // SUITKICONTROLLER_H

