#ifndef GLOBALDATABASE_H
#define GLOBALDATABASE_H

#include <functional>
#include <map>

#include <QtCore>

#include "game/common/common.hpp"
#include "game/common/catchtypes.hpp"
#include "game/Interfaces/ibasiccatch.hpp"
#include "game/World/gameworld.hpp"

namespace game {

class GlobalDatabase
{

public:
    GameWorld m_GameWorld;

    // [ID] <-> fish prototype
    std::map<i32, IBasicCatch*> m_mFishes;
    // items map


public:
    explicit GlobalDatabase();
    virtual ~GlobalDatabase();

    // TODO: loader from file + parser + writer
};

} // namespace game

#endif // GLOBALDATABASE_H
