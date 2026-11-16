#include "tc_rt.h"

u32 fn_80302078(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0x28u);
    a.r[0] = (u32)rd8(r6 + 0x10u);
    a.r[1] = rd32(r6 + 0x14u);
    a.r[2] = r6;
    r3 = tc_call(0x8030e93cu, &a);
    if (r3 == 0u) {
        r4 = 0u;
    } else {
        if (param_2 >= rd32(r3)) {
            r4 = 0u;
        } else {
            r4 = r3 + ((param_2 << 3u) & 0xfffffff8u);
            r3 = (u32)rd8(r4 + 4u);
            r4 = rd32(r4 + 8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = rd32((u32)param_1 + 0x28u);
            r3 = tc_call(0x8030e93cu, &a);
            r4 = r3;
        }
    }
    if (r4 == 0u) {
        r3 = 0u;
    } else {
        r3 = 1u;
        wr32(param_3, (u32)rd8(r4 + 4u));
        wr32(param_3 + 4u, rd32(r4 + 8u));
    }
    return r3;
}
