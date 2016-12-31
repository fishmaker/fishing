#ifndef IBASICCATCH_H
#define IBASICCATCH_H

#include <QtCore>

#include "game/common.hpp"
#include "game/catchtypes.hpp"

namespace game {

class IBasicCatch
{    
protected:
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

    UString Name() const;
    void setName(const UString &Name);

    UString Description() const;
    void setDescription(const UString &Description);

    QString ImagePath() const;
    void setImagePath(const QString &ImagePath);

    catchtype_e FishType() const;
    void setFishType(const catchtype_e &FishType);

    r64 Weight() const;
    void setWeight(const r64 &Weight);

    r64 Price() const;
    void setPrice(const r64 &Price);

    i32 Expirience() const;
    void setExpirience(const i32 &Expirience);

    i32 Depth() const;
    void setDepth(const i32 &Depth);

    UString PlaceName() const;
    void setPlaceName(const UString &PlaceName);

    UString BaitName() const;
    void setBaitName(const UString &BaitName);
};

} // namespace game

#endif // IBASICCATCH_H
