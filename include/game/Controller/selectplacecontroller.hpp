#ifndef SELECTPLACECONTROLLER_H
#define SELECTPLACECONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/selectplaceview.hpp"

namespace game {

class SelectPlaceController : public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit SelectPlaceController(QWidget *a_Parent=0);
    ~SelectPlaceController();

    void Startup();
    void Endup();

private:
    SelectPlaceView     *m_View;
};

} // namespace game

#endif // SELECTPLACECONTROLLER_H
