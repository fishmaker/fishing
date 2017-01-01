#ifndef IFORMBASE_H
#define IFORMBASE_H

#include "game/common/common.hpp"

namespace game {

typedef enum : i32 {
    FN_WELCOME          = 0,
    FN_BASE,
    FN_SHOP,
    // TODO: another windows
    FN_BOUND        // always last!
} formname_e;

class IFormBase
{
public:
    IFormBase();
    virtual ~IFormBase();

    virtual void Startup()  =0; // совершить действия перед show()
    virtual void Endup()    =0; // закончить действия перед hide()
};

}

#endif // IFORMBASE_H
