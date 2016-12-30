#ifndef TABLES_H
#define TABLES_H

#include <utility>
#include <vector>

#include "game/common.hpp"
#include "game/daytimes.hpp"
#include "game/fishsizes.hpp"

namespace game {

template<typename A, typename B>
struct table{
    std::vector<std::pair<A, B>> v;
};

// Таблица 2х8 Наживка(ID) <-> Процент улова
typedef struct table<game::i32, game::r64> tableBaitCatch_t;

// Таблица 2х8 Время ловка <-> Активность
typedef struct table<game::daytimes_t, game::r64> tableTimeActivity_t;

// Таблица 2х5 Глубина <-> Размер
typedef struct table<game::i32, game::fishsizes_t> tableDepthSize_t;

} // namespace game

#endif // TABLES_H
