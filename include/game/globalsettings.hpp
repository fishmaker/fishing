#ifndef GLOBALSETTINGS_H
#define GLOBALSETTINGS_H

#include <QtCore>

#include <game/common/common.hpp>

namespace game {

typedef enum : i32 {
    DM_1690 = 0,        // 1600 x 900 (16:9)
    DM_8954,            // 896 x 504  (16:9)
    DM_8060,            // 800 x 600  (4:3)
    DM_1278,            // 1024 x 768 (4:3)
} dimension_e;

const QRect s_L1Dimensions = QRect(0, 0, 1000, 550);
const QRect s_L2Dimensions = QRect(0, 0, 896, 504);
const QRect s_L3Dimensions = QRect(0, 0, 300, 200);

typedef struct {
    dimension_e     dimensions;
    bool            sound_bg;
    bool            sound_fg;
    i32             sound_level;
} settings_t;

} // namespace game

#endif // GLOBALSETTINGS_H
