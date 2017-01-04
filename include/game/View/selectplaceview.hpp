#ifndef SELECTPLACEVIEW_H
#define SELECTPLACEVIEW_H

#include <QWidget>
#include <QLabel>

#include "game/common/globalsettings.hpp"

namespace game {

class SelectPlaceView : public QWidget
{
    Q_OBJECT

public:
    QLabel  m_Labels[6];

public:
    void Setup();

    explicit SelectPlaceView(QWidget *a_Parent =0);
    ~SelectPlaceView();
};

} // namespace game

#endif // SELECTPLACEVIEW_H
