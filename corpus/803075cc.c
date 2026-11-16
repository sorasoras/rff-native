#include "tc_rt.h"

u32 fn_803075cc(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) == 0u) {
        r3 = 0u;
    } else {
        r4 = rd32((u32)param_1 + 8u);
        r3 = (u32)rd8(r4 + 0x18u);
        r5 = r4 + 8u;
        r4 = rd32(r4 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        r3 = tc_call(0x8030e93cu, &a);
        r3 = (u32)rd8(r3);
    }
    return r3;
}
