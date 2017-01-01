#ifndef GLOBALDATABASE_H
#define GLOBALDATABASE_H

#include <functional>
#include <map>

#include <QtCore>

#include "game/common.hpp"
#include "game/fish.hpp"
#include "game/catchtypes.hpp"

namespace game {

class GlobalDatabase
{
    i32 m_FishesID;
    std::map<i32, std::function<Fish*(  const catchclass_e a_CatchClass,
                                        UString a_Name,
                                        UString a_Description,
                                        QString a_ImagePath,
                                        const catchtype_e a_FishType,
                                        const r64 a_Weight,
                                        const r64 a_Price,
                                        const i32 a_Expirience,
                                        const i32 a_Depth,
                                        UString a_PlaceName,
                                        UString a_BaitName,
                                        const i32 a_BitingTime,
                                        const i32 a_FreqBite,
                                        const i32 a_PlayerReactionTime,
                                        const i32 a_MaxCatchTime)>> m_mFishesDB;


public:
    explicit GlobalDatabase();
    virtual ~GlobalDatabase();

    // Use this func to create new Fishes
    // TODO: maybe use std::shared_ptr<Fish>
    Fish* GetNewFish(i32 a_ID, const r64 a_Weight, const i32 a_Depth, UString &&a_PlaceName, UString &&a_BaitName);

    // TODO: loader from file + parser + writer

private:
    // TODO: maybe use std::shared_ptr<Fish>
    Fish* CreateFish(const catchclass_e a_CatchClass,
                     UString a_Name,
                     UString a_Description,
                     QString a_ImagePath,
                     const catchtype_e a_FishType,
                     const r64 a_Weight,
                     const r64 a_Price,
                     const i32 a_Expirience,
                     const i32 a_Depth,
                     UString a_PlaceName,
                     UString a_BaitName,
                     const i32 a_BitingTime,
                     const i32 a_FreqBite,
                     const i32 a_PlayerReactionTime,
                     const i32 a_MaxCatchTime);
};

} // namespace game

#endif // GLOBALDATABASE_H
