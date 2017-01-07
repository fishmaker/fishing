#ifndef QUESTSVIEW_H
#define QUESTSVIEW_H

#include <QWidget>

namespace game {

class QuestsView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit QuestsView(QWidget *a_Parent =0);
    ~QuestsView();
};

} // namespace game

#endif // QUESTSVIEW_H
