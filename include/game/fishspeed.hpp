#ifndef FISHSPEED_H
#define FISHSPEED_H

#include "game/common.hpp"

namespace game {

typedef enum {
    FS_VERYSLOW     = 0,    // очень медленная
    FS_SLOW,                // медленная
    FS_TYPICAL,              // нормальная
    FS_FAST,                // быстрая
    FS_VERYFAST,            // очень быстрая
} fishspeed_t;

static const r64 speed_rates[] = {
    0.25,
    0.5,
    1.0,
    2.0,
    4.0
};

} // namespace game

#endif // FISHSPEED_H
