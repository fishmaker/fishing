#ifndef GLOBALDATABASE_H
#define GLOBALDATABASE_H

#include <functional>
#include <map>

#include <QtCore>

#include "game/common/common.hpp"
#include "game/common/catchtypes.hpp"
#include "game/fish.hpp"

namespace game {

class GlobalDatabase
{
    // [ID] <-> fish prototype
    std::map<i32, Fish*> m_mFishes;
    // items map


public:
    explicit GlobalDatabase();
    virtual ~GlobalDatabase();

    // TODO: loader from file + parser + writer

private:

};

} // namespace game

#endif // GLOBALDATABASE_H
