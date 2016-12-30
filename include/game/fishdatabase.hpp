#ifndef FISHDATABASE_H
#define FISHDATABASE_H

#include <map>

#include "game/common.hpp"
#include "game/fishstructs.hpp"

namespace game {

class FishDatabase
{
    std::map<i32, fishDBrecord_t> m_FishDatabase;

public:
    explicit FishDatabase();
    virtual ~FishDatabase();

};

} // namespace game

#endif // FISHDATABASE_H
