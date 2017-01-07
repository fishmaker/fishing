#ifndef TABLES_H
#define TABLES_H

#include <utility>
#include <vector>

#include "game/common/common.hpp"
#include "game/common/daytimes.hpp"

namespace game {

template<typename A, typename B>
struct table{
    std::vector<std::pair<A, B>> v;
};

typedef enum : i32 {
    PE_10 = 10, // для наглядности
    PE_20 = 20,
    PE_30 = 30,
    PE_40 = 40,
    PE_50 = 50,
    PE_60 = 60,
    PE_70 = 70,
    PE_80 = 80,
    PE_90 = 90,
    PE_100 = 100,
} percents_e;

// Таблица 2х8 Наживка(ID) <-> Процент улова
typedef struct table<i32, percents_e> tableBaitCatch_t;

// Таблица 2х8 Время лова <-> Активность
typedef struct table<daytimes_e, percents_e> tableTimeActivity_t;

// Таблица 2х5 Глубина <-> Размер
typedef struct table<i32, percents_e> tableDepthSize_t;

} // namespace game

#endif // TABLES_H
