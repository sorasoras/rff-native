#include "tc_rt.h"

u32 fn_8009de38(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = rd32(r5 + 0x10u);
    a.r[0] = r4 + (((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu);
    a.r[1] = r4;
    a.r[2] = r5;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu) + 4u), &a);
    a.r[0] = rd32((u32)param_1 + 0xcu);
    a.r[1] = r3;
    a.r[2] = param_2;
    r3 = tc_call(0x8009c3c4u, &a);
    if ((u32)(s8)r3 != 0u) {
        r3 = 0u;
        wr32((u32)param_1 + 0x24u, rd32((u32)param_1 + 0x24u) + 6u);
    } else {
        r3 = 1u;
    }
    return r3;
}
