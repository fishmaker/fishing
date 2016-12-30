#ifndef FISHDATABASE_H
#define FISHDATABASE_H

#include <map>

#include "game/common.hpp"
#include "game/fishstructs.hpp"

class FishDatabase
{
    std::map<game::i32, game::fishDBrecord_t> m_FishDatabase;

public:
    explicit FishDatabase();
    virtual ~FishDatabase();

};

#endif // FISHDATABASE_H
