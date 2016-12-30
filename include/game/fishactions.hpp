#ifndef FISHACTIONS_H
#define FISHACTIONS_H

#include "game/common.hpp"

namespace game {

typedef enum : i32 {
    AC_DRY      = 0b00000001, // засушить
    AC_CUT      = 0b00000010, // порезать
    AC_BAITFISH = 0b00000100, // живец
    AC_SMOKE    = 0b00001000, // закоптить
    AC_LURE     = 0b00010000, // прикорм
    AC_TROPHY   = 0b00100000, // сделать трофей
    AC_CANNED   = 0b01000000, // сделать консервы
    AC_EAR      = 0b10000000, // сделать уху
    AC_BAG      = 0b0000000100000000,   // перекинуть в рюкзак
} actions_e;

} // namespace game

#endif // FISHACTIONS_H
