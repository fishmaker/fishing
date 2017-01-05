#ifndef IFORMBASE_H
#define IFORMBASE_H

#include "game/common/common.hpp"

namespace game {

typedef enum : i32 {
    FN_WELCOME          = 0,
    FN_LOBBY,
    FN_SELECTPLAYER,
    FN_CREATENEW,
    FN_SELECTPLACE,
    FN_SHOP,
    FN_TRAVEL,
    FN_FISHINGGAME,
    FN_SELLFISH,
    FN_FISHINGKIT,
    FN_FOOD,
    FN_ITEMS,
    // TODO: another windows
    FN_BOUND        // always last!
} formname_e;

class IFormBase
{
public:
    IFormBase();
    ~IFormBase();

    virtual void Startup()  =0; // совершить действия перед show()
    virtual void Endup()    =0; // закончить действия перед hide()
};

}

#endif // IFORMBASE_H
