#ifndef FISHSPEED_H
#define FISHSPEED_H

#include "game/common.hpp"

namespace game {

typedef enum : i32 {
    FS_VERYSLOW     = 0,    // очень медленная
    FS_SLOW,                // медленная
    FS_TYPICAL,              // нормальная
    FS_FAST,                // быстрая
    FS_VERYFAST,            // очень быстрая
    FS_FASTEST,
} fishspeed_e;

static const r64 speed_rates[] = {
    /* [FS_VERYSLOW] */     0.25,
    /* [FS_SLOW] */         0.5,
    /* [FS_TYPICAL] */      1.0,
    /* [FS_FAST] */         2.0,
    /* [FS_VERYFAST] */     4.0,
    /* [FS_FASTEST] */      8.0
};

} // namespace game

#endif // FISHSPEED_H
