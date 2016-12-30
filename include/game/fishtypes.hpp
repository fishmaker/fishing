#ifndef FISHTYPES_H
#define FISHTYPES_H

#include <utility>

#include "game/common.hpp"

namespace game {

typedef enum {
    FT_NORMAL       = 0b00000001, // типичная   [0%  .. 60%]
    FT_CREDIT       = 0b00000010, // зачетная   [60% .. 90%]
    FT_TROPHY       = 0b00000100, // трофейная  [90% .. 120%]
    FT_GIGANT       = 0b00001000, // гигант     [120% .. 300%]
    FT_MUTANT       = 0b00010000, // мутант     [300% .. 500%]
    FT_MONSTER      = 0b00100000, // монстр     [500% .. 1000%]
    FT_ANOMALY      = 0b01000000, // аномалия   [1000% .. 2000%]
} fishtype_t;


constexpr static const std::pair<game::i32, game::r64> s_fish_sizes[] = {
    std::make_pair(1.0, 60.0),
    std::make_pair(60.0, 90.0),
    std::make_pair(90.0, 120.0),
    std::make_pair(120.0, 300.0),
    std::make_pair(300.0, 500.0),
    std::make_pair(500.0, 1000.0),
    std::make_pair(1000.0, 2000.0)
};

} // namespace game

#endif // FISHTYPES_H
