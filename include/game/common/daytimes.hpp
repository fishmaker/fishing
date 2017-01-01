#ifndef DAYTIMES_HPP
#define DAYTIMES_HPP

#include "game/common/common.hpp"

namespace game {

typedef enum : i32 {
    DT_TIME00 = 0,      // 00:00
    DT_TIME03,          // 03:00
    DT_TIME06,          // 06:00
    DT_TIME09,          // 09:00
    DT_TIME12,          // 12:00
    DT_TIME15,          // 15:00
    DT_TIME18,          // 18:00
    DT_TIME21,          // 21:00
} daytimes_e;

} // namespace game

#endif // DAYTIMES_HPP
