#ifndef FISHFREQUENCY_H
#define FISHFREQUENCY_H

#include "game/common.hpp"

namespace game {

typedef enum {
    FF_VERYFAST     = 0,
    FF_FAST,
    FF_NORMAL,
    FF_SLOW,
    FF_VERYSLOW,
    FF_SLOWEST
} fishfrequency_t;

// Частота обновления движений (мс)
static const game::i32 fish_freqs[] = {
    15,
    50,
    100,
    200,
    500,
    1000
};

} // namespace game

#endif // FISHFREQUENCY_H
