#ifndef FISHSTRUCTS_H
#define FISHSTRUCTS_H

#include <vector>

#include <QtCore>

#include "game/common.hpp"
#include "game/catchtypes.hpp"
#include "game/tables.hpp"
#include "game/fishspeed.hpp"
#include "game/fishfrequency.hpp"

namespace game {

// Информация для базы данных
// ID назначит база данных
typedef struct {
    UString             name;           // имя: Плотва
    UString             description;    // описание: Питается ...
    QString             image_path;     // путь к картинке: ":/fishes/111.png"
    catchtype_e         fish_type;      // размерность добычи
    r64                 min_weight;     // минимальный вес: 1.232 - 1кг 232г
    r64                 max_weight;     // максимальный вес
    r64                 price;          // стоимость за 1г
    i32                 expirience;     // сколько приносит опыта за 1г
    tableDepthSize_t    depth_size;     // таблица глубина - размер
    tableTimeActivity_t time_activity;  // таблица время - активность
    tableBaitCatch_t    bait_catch;     // таблица наживка - улов
    fishspeed_e         fish_speed;     // скорость рыбы
    fishfrequency_e     frequency;      // активность рыбы
} fishDBrecord_t;

// Информация для хранения информации о рыбе на конкретных местах ловли
typedef struct {
    i32                 ID;
    i32                 count;
} fishplaceinfo_t;

} // namespace game

#endif // FISHSTRUCTS_H
