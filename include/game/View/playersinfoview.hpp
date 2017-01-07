#ifndef PLAYERSINFOVIEW_H
#define PLAYERSINFOVIEW_H

#include <QWidget>

namespace game {

class PlayersInfoView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit PlayersInfoView(QWidget *a_Parent =0);
    ~PlayersInfoView();
};

} // namespace game

#endif // PLAYERSINFOVIEW_H

