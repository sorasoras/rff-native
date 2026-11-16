#include "tc_rt.h"

u32 fn_80276158(s32 param_1, u32 param_r4)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    r3 = tc_call(0x80275d08u, &a);
    r4 = rd32((u32)param_1 + 4u);
    if ((s32)r3 < 0 || (rd32(r4 + (r3 * 0xcu)) & 0xff000000u) == 0u) {
        r3 = 0u;
    } else {
        wr32((u32)param_1 + 0x18u, r3);
        r3 = 1u;
    }
    return r3;
}
