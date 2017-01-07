#ifndef SETTINGSVIEW_H
#define SETTINGSVIEW_H

#include <QWidget>

namespace game {

class SettingsView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit SettingsView(QWidget *a_Parent =0);
    ~SettingsView();
};

} // namespace game

#endif // SETTINGSVIEW_H


