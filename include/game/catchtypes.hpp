#ifndef CATCHTYPES_H
#define CATCHTYPES_H

#include <utility>

#include "game/common.hpp"

namespace game {

typedef enum : i32 {
    CT_NORMAL       = 0b00000001, // типичная   [0%  .. 60%]
    CT_CREDIT       = 0b00000010, // зачетная   [60% .. 90%]
    CT_TROPHY       = 0b00000100, // трофейная  [90% .. 120%]
    CT_GIGANT       = 0b00001000, // гигант     [120% .. 300%]
    CT_MUTANT       = 0b00010000, // мутант     [300% .. 500%]
    CT_MONSTER      = 0b00100000, // монстр     [500% .. 1000%]
    CT_ANOMALY      = 0b01000000, // аномалия   [1000% .. 2000%]
} catchtype_t;

typedef enum : i32 {
    CC_FISH         = 0,    // рыба
    CC_TRASH,               // мусор
    CC_BOOT,                // ботинок
    CC_TIRE,                // покрышка
    CC_CHEST,               // сундук
    CC_TREASURE,            // клад
    CC_BANK,                // банка
    CC_BOTTLE,              // бутылка
    CC_BARREL,              // бочка
    CC_IRON,                // железо
    CC_LOG,                 // бревно
    CC_DECK,                // колода
} catchclass_t;

constexpr static const
std::pair<i32, r64> s_fish_sizes[] = {
    std::make_pair(1.0, 60.0),
    std::make_pair(60.0, 90.0),
    std::make_pair(90.0, 120.0),
    std::make_pair(120.0, 300.0),
    std::make_pair(300.0, 500.0),
    std::make_pair(500.0, 1000.0),
    std::make_pair(1000.0, 2000.0)
};

} // namespace game

#endif // CATCHTYPES_H
