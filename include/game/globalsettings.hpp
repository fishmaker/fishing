#ifndef GLOBALSETTINGS_H
#define GLOBALSETTINGS_H

#include <QtCore>

#include <game/common.hpp>

namespace game {

// Ширина окна
static const i32 WINDOW_WIDTH = 1000;

// Высота окна
static const i32 WINDOW_HEIGHT = 550;

// Геометрия окна
static const QRect WINDOW_RECT = QRect(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);


typedef enum : i32 {
    DM_1055,        // 1000 x 550
} dimension_e;

typedef struct {
    dimension_e     dimensions;
    bool            sound_bg;
    bool            sound_fg;
    i32             sound_level;
} settings_t;

} // namespace game

#endif // GLOBALSETTINGS_H
