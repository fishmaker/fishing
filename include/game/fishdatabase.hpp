#ifndef FISHDATABASE_H
#define FISHDATABASE_H

#include <map>

#include "game/common.hpp"
#include "game/fishstructs.hpp"

class FishDatabase
{
public:
    explicit FishDatabase();
    virtual ~FishDatabase();

private:
    std::map<game::i32, game::fishDBrecord_t> m_FishDatabase;
};

#endif // FISHDATABASE_H
