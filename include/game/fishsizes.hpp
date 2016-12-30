#ifndef FISHSIZES_H
#define FISHSIZES_H

#include "game/common.hpp"

namespace game {

typedef enum : i32 {
    FS_SMALL        = 0,    // малек
    FS_NORMAL,              // средняя
    FS_BIG,                 // крупная
} fishsizes_t;

} // namespace game

#endif // FISHSIZES_H
