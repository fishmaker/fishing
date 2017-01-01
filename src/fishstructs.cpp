#include "game/fishstructs.hpp"

game::fishDBrecord_t game::FishDBFactory()
{
   fishDBrecord_t tmp = { game::UString(L"Плотва"),
                          game::UString(L"Обитает в реке, питается крабами, курит бамбук"),
                          QString(":/1.png"),
                          game::CT_NORMAL,
                          100.0,
                          10000.0,
                          0.001,
                          1,
                          {},
                          {},
                          {},
                          6,
                          100,
                          2000,
                          15000,
                          game::FS_TYPICAL,
                          game::FF_NORMAL};
   return tmp;
}
