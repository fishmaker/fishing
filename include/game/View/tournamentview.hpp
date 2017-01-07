#ifndef TOURNAMENTVIEW_H
#define TOURNAMENTVIEW_H

#include <QWidget>

namespace game {

class TournamentView : public QWidget
{
    Q_OBJECT

public:
    void Setup();

public:
    explicit TournamentView(QWidget *a_Parent =0);
    ~TournamentView();
};

} // namespace game

#endif // TOURNAMENTVIEW_H
