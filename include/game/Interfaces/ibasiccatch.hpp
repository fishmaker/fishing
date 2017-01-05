#ifndef IBASICCATCH_H
#define IBASICCATCH_H

#include "game/common/catchtypes.hpp"

namespace game {

class IBasicCatch
{
public:
    IBasicCatch();
    virtual ~IBasicCatch();

private:
    catchclass_e    m_CatchClass;
};

} // namespace game

#endif // IBASICCATCH_H
