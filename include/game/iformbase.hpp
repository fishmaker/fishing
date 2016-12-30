#ifndef IFORMBASE_H
#define IFORMBASE_H

#include "game/common.hpp"

namespace game {

class IFormBase
{
public:
    typedef enum : i32 {
        FN_WELCOME          = 0,
        FN_BASE,
        FN_SHOP,
        // TODO: another windows
        FN_BOUND        // always last!
    } formname_e;

public:
    IFormBase();
    virtual ~IFormBase();

    virtual void Startup()  =0; // совершить действия перед show()
    virtual void Endup()    =0; // закончить действия перед hide()
};

}

#endif // IFORMBASE_H
