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

} // namespace game

#endif // GLOBALSETTINGS_H
