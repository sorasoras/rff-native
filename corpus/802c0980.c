#include "tc_rt.h"

void fn_802c0980(u32 param_1)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = rd32(param_1);
    a.r[1] = 0x802c0634u;
    r3 = tc_call(0x8027a268u, &a);
    wr32(param_1 + 0x24u, r3);
    a.r[0] = rd32(param_1);
    a.r[1] = 0x802c0748u;
    r3 = tc_call(0x8027a2d0u, &a);
    wr32(param_1 + 0x28u, r3);
    r3 = rd32(param_1);
    wr8(param_1 + 0x44u, 1u);
    a.r[0] = r3;
    a.r[1] = 0x817fdfe8u;
    r3 = tc_call(0x8027a174u, &a);
    c0lt = (s32)r3 < 0;
    if (r3 != 0u) {
        if (!c0lt) {
            return;
        }
        if ((s32)r3 >= -1) {
            wr8(param_1 + 0x40u, 0u);
            return;
        }
        return;
    }
    wr8(param_1 + 0x40u, 1u);
    return;
}
