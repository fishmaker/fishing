#ifndef SUITCASE_H
#define SUITCASE_H

#include <vector>

#include "game/Items/rod.hpp"
#include "game/Items/spinning.hpp"
#include "game/Items/reel.hpp"
#include "game/Items/line.hpp"
#include "game/Items/hook.hpp"
#include "game/Items/spoon.hpp"
#include "game/Items/bait.hpp"

namespace game {

class Suitcase
{
    std::vector<Rod*>       m_vRods;
    std::vector<Spinning*>  m_vSpinnings;
    std::vector<Reel*>      m_vReels;
    std::vector<Line*>      m_vLines;
    std::vector<Hook*>      m_vHooks;
    std::vector<Spoon*>     m_vSpoons;
    std::vector<Bait*>      m_vBaits;

public:
    explicit Suitcase();
    virtual ~Suitcase();

};

} // namespace game

#endif // SUITCASE_H
