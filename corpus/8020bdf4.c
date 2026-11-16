#include "tc_rt.h"

void fn_8020bdf4(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_2;
    a.r[1] = (u32)param_3;
    a.r[2] = (u32)param_4;
    r3 = tc_call(0x8020bbacu, &a);
    if (r3 == 0u) {
        r0 = rd32(0x804890ccu);
        wr32(param_1, rd32(0x804890c8u));
        wr32(param_1 + 4u, r0);
        wr32(param_1 + 8u, rd32(0x804890d0u));
    } else {
        r4 = rd32((u32)param_2 + 4u) + ((u32)param_3 * 0x370u) + ((u32)param_4 * 0x2cu);
        r0 = rd32(r4 + 0x28u);
        wr32(param_1, rd32(r4 + 0x24u));
        wr32(param_1 + 4u, r0);
        wr32(param_1 + 8u, rd32(r4 + 0x2cu));
    }
    return;
}
