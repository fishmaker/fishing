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
    QString m_BGImage;                              // (8000)
    i32 m_ArrayMap[TILE_HEIGHT][TILE_WIDTH];        // (1000-1015) матрица глубин
    std::vector<fishplaceinfo_t>    m_FishMap[TILE_HEIGHT][TILE_WIDTH]; // (1016-1271) Зона - ID, ID, ID рыб ...
    UString m_Description;                          // (7000)
    UString m_Name;                                 // (7001)


public:
    explicit Place();
    virtual ~Place();

    QString BGImage() const;
    void setBGImage(const QString &BGImage);

    UString Description() const;
    void setDescription(const UString &Description);

    UString Name() const;
    void setName(const UString &Name);
};

} // namespace game

#endif // PLACE_H
