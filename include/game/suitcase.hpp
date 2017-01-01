#ifndef SUITCASE_H
#define SUITCASE_H

#include <vector>

#include "game/rod.hpp"
#include "game/spinning.hpp"
#include "game/reel.hpp"
#include "game/line.hpp"
#include "game/hook.hpp"
#include "game/spoon.hpp"
#include "game/bait.hpp"

namespace game {

class Suitcase
{
    std::vector<Rod*> m_vRods;
    std::vector<Spinning*> m_vSpinnings;
    std::vector<Reel*> m_vReels;
    std::vector<Line*> m_vLines;
    std::vector<Hook*> m_vHooks;
    std::vector<Spoon*> m_vSpoons;
    std::vector<Bait*> m_vBaits;

public:
    explicit Suitcase();
    virtual ~Suitcase();

};

} // namespace game

#endif // SUITCASE_H
