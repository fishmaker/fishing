#ifndef FISH_H
#define FISH_H

#include <QtCore>

#include "game/common/common.hpp"
#include "game/common/catchtypes.hpp"
#include "game/common/tables.hpp"
#include "game/ibasiccatch.hpp"

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
} fishactions_e;


class Fish : public IBasicCatch
{
    UString             m_Name;             // имя: Плотва
    UString             m_Description;      // описание: Питается ...
    UString             m_PlaceName;        // названия места
    UString             m_BaitName;         // название наживки
    QString             m_ImagePath;        // путь к картинке: ":/fishes/111.png"
    catchtype_e         m_FishType;         // размерность добычи
    fishactions_e       m_Actions;          // доступные действия
    r64                 m_MinWeight;        // минимальный вес: 1.232 - 1кг 232г
    r64                 m_MaxWeight;        // максимальный вес
    r64                 m_Price;            // стоимость за 1г
    r64                 m_Expirience;       // сколько приносит опыта за 1г
    i32                 m_BitingTime;       // MAX время клева (до подсечки)
    i32                 m_FreqBite;         // MAX частота колебания поплавка (до подсечки)
    i32                 m_PlayerReaction;   // MAX время на реакцию у игрока (до подсечки)
    i32                 m_CatchTime;        // MAX время на вылов (после подсечки)
    i32                 m_Frequency;        // MAX активность рыбы (после подсечки)
    r64                 m_FishSpeed;        // MAX скорость рыбы (после подсечки)
    tableDepthSize_t    depth_size;         // таблица глубина - размер
    tableTimeActivity_t time_activity;      // таблица время - активность
    tableBaitCatch_t    bait_catch;         // таблица наживка - улов

public:
    explicit Fish();
    ~Fish();

};

} // namespace game

#endif // FISH_H
