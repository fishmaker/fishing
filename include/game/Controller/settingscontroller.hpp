#ifndef SETTINGSCONTROLLER_H
#define SETTINGSCONTROLLER_H

#include <QObject>
#include <QWidget>

#include "game/Interfaces/iformbase.hpp"
#include "game/View/settingsview.hpp"

namespace game {

class SettingsController :  public QObject, public IFormBase
{
    Q_OBJECT

public:
    explicit SettingsController(QWidget *a_Parent =0);
    ~SettingsController();

    void Startup();
    void Endup();

private:
    SettingsView        *m_View;
};

} // namespace game

#endif // SETTINGSCONTROLLER_H

