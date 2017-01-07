#ifndef BAG_H
#define BAG_H

#include <list>

#include "game/fish.hpp"

namespace game {

class Bag
{    
public:
    std::list<playerscatch_t> m_lCatched;

public:
    explicit Bag();
    virtual ~Bag();
};

} // namespace game

#endif // BAG_H
