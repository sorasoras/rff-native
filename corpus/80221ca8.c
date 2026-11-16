#include "tc_rt.h"

u32 fn_80221ca8(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    r3 = tc_call(0x800d5d30u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = 1u;
        wr32((u32)param_1 + 0xbcu, 0u);
        wr32((u32)param_1 + 0xc0u, 0u);
    }
    return r3;
}
