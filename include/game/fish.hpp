#ifndef FISH_H
#define FISH_H

#include <map>
#include <functional>

#include <QtCore>

#include "game/common/common.hpp"
#include "game/common/catchtypes.hpp"
#include "game/common/tables.hpp"
#include "game/Interfaces/ibasiccatch.hpp"

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

typedef struct {
    i32 ID;
    r64 weight;
    UString             m_PlaceName;        // названия места
    UString             m_BaitName;         // название наживки
} playerscatch_t;

class Fish : public IBasicCatch
{
    UString             m_Name;             // имя: Плотва
    UString             m_Description;      // описание: Питается ...
    QString             m_ImagePath;        // путь к картинке: ":/fishes/111.png"
    catchtype_e         m_FishType;         // размерность добычи
    fishactions_e       m_Actions;          // доступные действия
    r64                 m_MinWeight;        // минимальный вес: 1.232 - 1кг 232г
    r64                 m_MaxWeight;        // максимальный вес
    r64                 m_Price;            // стоимость за 1г
    r64                 m_Expirience;       // сколько приносит опыта за 1г, TODO: value?
    i32                 m_BitingTime;       // MAX время клева (до подсечки), ms
    i32                 m_FreqBite;         // MAX частота колебания поплавка (до подсечки), ms
    i32                 m_PlayerReaction;   // MAX время на реакцию у игрока (до подсечки), ms
    i32                 m_CatchTime;        // MAX время на вылов (после подсечки), ms
    i32                 m_Frequency;        // MAX активность рыбы (после подсечки), ms
    r64                 m_FishSpeed;        // MAX скорость рыбы (после подсечки)
    tableDepthSize_t    m_vDepthSize;       // таблица глубина - размер(начиная от ..)
    tableTimeActivity_t m_vTimeActivity;    // таблица время - активность(начиная от ..)
    tableBaitCatch_t    m_vBaitCatch;       // таблица наживка - вероятность улова(начиная от ..)

    std::map<std::string, std::function<void(LString&)>> m_mInitializer;

public:
    explicit Fish();
    ~Fish();

    UString Name() const;
    void setName(const UString &Name);

    UString Description() const;
    void setDescription(const UString &Description);

    QString ImagePath() const;
    void setImagePath(const QString &ImagePath);

    catchtype_e FishType() const;
    void setFishType(const catchtype_e &FishType);

    fishactions_e Actions() const;
    void setActions(const fishactions_e &Actions);

    r64 MinWeight() const;
    void setMinWeight(const r64 &MinWeight);

    r64 MaxWeight() const;
    void setMaxWeight(const r64 &MaxWeight);

    r64 Price() const;
    void setPrice(const r64 &Price);

    r64 Expirience() const;
    void setExpirience(const r64 &Expirience);

    i32 BitingTime() const;
    void setBitingTime(const i32 &BitingTime);

    i32 FreqBite() const;
    void setFreqBite(const i32 &FreqBite);

    i32 PlayerReaction() const;
    void setPlayerReaction(const i32 &PlayerReaction);

    i32 CatchTime() const;
    void setCatchTime(const i32 &CatchTime);

    i32 Frequency() const;
    void setFrequency(const i32 &Frequency);

    r64 FishSpeed() const;
    void setFishSpeed(const r64 &FishSpeed);

    const tableDepthSize_t* vDepthSize() const;

    const tableTimeActivity_t* vTimeActivity() const;

    const tableBaitCatch_t* vBaitCatch() const;

private:
    void p_SetName(LString&);
    void p_SetDescription(LString&);
    void p_SetImage(LString&);
    void p_SetType(LString&);
    void p_SetActions(LString&);
    void p_SetMinWeight(LString&);
    void p_SetMaxWeight(LString&);
    void p_SetPrice(LString&);
    void p_SetExpirience(LString&);
    void p_SetBitingTime(LString&);
    void p_SetFreqBite(LString&);
    void p_SetPlayerReaction(LString&);
    void p_SetCatchTime(LString&);
    void p_Frequency(LString&);
    void p_SetFishSpeed(LString&);
    void p_SetDepthSize(LString&);
    void p_SetTimeActivity(LString&);
    void p_SetBaitCatch(LString&);

};

} // namespace game

#endif // FISH_H
