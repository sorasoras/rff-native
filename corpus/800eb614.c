#include "tc_rt.h"

u32 fn_800eb614(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    r3 = tc_call(0x800afb38u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r5 = rd32((u32)param_1 + 0x150u);
        r3 = 1u;
        wr8(r5 - 0x7fb79ba4u, (u8)((u32)rd8(r5 - 0x7fb79ba4u) | 8u));
        wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) | 0x200000u);
    }
    return r3;
}
