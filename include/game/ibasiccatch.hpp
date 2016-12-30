#ifndef IBASICCATCH_H
#define IBASICCATCH_H

#include <QtCore>

#include "game/common.hpp"
#include "game/catchtypes.hpp"

namespace game {

class IBasicCatch
{    
    UString             m_Name;           // имя: Плотва
    UString             m_Description;    // описание: Питается ...
    QString             m_ImagePath;      // путь к картинке: ":/fishes/111.png"
    catchtype_e         m_FishType;       // размерность добычи
    r64                 m_Weight;         // вес рыбы
    r64                 m_Price;          // стоимость за 1г
    i32                 m_Expirience;     // сколько приносит опыта за 1г
    i32                 m_Depth;          // глубина
    UString             m_PlaceName;      // названия места
    UString             m_BaitName;       // название наживки

public:
    explicit IBasicCatch();
    // TODO: Конструктор всяго
    virtual ~IBasicCatch();

    // TODO: get/set or Builder
};

} // namespace game

#endif // IBASICCATCH_H
