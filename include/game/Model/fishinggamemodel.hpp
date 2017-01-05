#ifndef FISHINGGAMEMODEL_H
#define FISHINGGAMEMODEL_H

#include <QTimer>

#include "game/player.hpp"
#include "game/World/place.hpp"
#include "game/Items/fishingset.hpp"
#include "game/Interfaces/ibasiccatch.hpp"
#include "game/fish.hpp"

namespace game {

typedef enum {
    DT_BITE             = 0,
    DT_FREQUENCY,
    DT_REACTION,
    DT_CATCH,
    DT_FREQCHANGEPOS,
    DT_GETFISH,
    DT_BOUND
} desctimers_e;

typedef struct {
    // Настройка
    i32             m_CurrentNumber;
    FishingSet      *m_FishingSet;
    u32             m_CurrentDepth;
    bool            m_RodThrown;
    // Клев
    bool            m_RodBlocked;
    playerscatch_t  *m_CurrentCatch;
    QTimer          m_Timers[DT_BOUND];
    r64             m_RodTension;       // [0..100]
    r64             m_ReelTension;      // [0..100]
    r64             m_Koefficient;      // [1..2]
    r64             m_Lift;             // [0..10]  TODO: продумать
} activefishingset_t;

class FishingGameModel
{
public:
    explicit FishingGameModel();
    ~FishingGameModel();

private:
    Player      *m_ActivePlayer;
    activefishingset_t  m_ActiveSets[3];
    Place       *m_CurrentPlace; // TODO: or ID?
};

} // namespace game

#endif // FISHINGGAMEMODEL_H
