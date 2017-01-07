#ifndef PLACE_H
#define PLACE_H

#include <vector>
#include <map>
#include <functional>

#include <QtCore>
#include <QImage>

#include "game/common/common.hpp"

namespace game {

typedef struct {
    i32       ID;
    i32     count;
} fishplaceinfo_t;

using func = std::function<void(LString&)>;

class Place
{
public:
    static const i32 TILE_WIDTH = 32;
    static const i32 TILE_HEIGHT = 16;

    i32 m_ArrayMap[TILE_HEIGHT][TILE_WIDTH];        // (1000-1015) матрица глубин

private:
    UString m_Name;
    UString m_Description;
    QString m_BGImage;
    std::vector<fishplaceinfo_t> m_FishMap;         // fish: ID count - should be last

    std::map<std::string, func> m_mInitializer;

public:
    explicit Place();
    virtual ~Place();

    QString BGImage() const;
    void setBGImage(const QString &BGImage);

    UString Description() const;
    void setDescription(const UString &Description);

    UString Name() const;
    void setName(const UString &Name);

private:
    void p_SetName(LString&);
    void p_SetDescription(LString&);
    void p_SetBGImage(LString&);
    void p_SetDepthMap(LString&);
    void p_SetFishMap(LString&);
};

} // namespace game

#endif // PLACE_H
