#ifndef PLACE_H
#define PLACE_H

#include <vector>

#include <QtCore>
#include <QImage>

#include "game/common/common.hpp"

namespace game {

typedef struct {
    i32       ID;
    i32     count;
} fishplaceinfo_t;

class Place
{
public:
    static const i32 TILE_WIDTH = 32;
    static const i32 TILE_HEIGHT = 16;

private:
    QImage m_BGImage;
    i32 m_ArrayMap[TILE_HEIGHT][TILE_WIDTH]; // матрица глубин
    std::vector<i32>    m_FishMap[TILE_HEIGHT][TILE_WIDTH]; // Зона - ID, ID, ID ...
    std::vector<fishplaceinfo_t>    m_Fishes;
    UString m_Description;
    UString m_Name;


public:
    explicit Place();
    virtual ~Place();

    QImage BGImage() const;
    void setBGImage(const QImage &BGImage);

    std::vector<fishplaceinfo_t> Fishes() const;
    void setFishes(const std::vector<fishplaceinfo_t> &Fishes);

    UString Description() const;
    void setDescription(const UString &Description);

    UString Name() const;
    void setName(const UString &Name);
};

} // namespace game

#endif // PLACE_H
