#include "tc_rt.h"

u32 fn_801f2528(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = rd32(rd32(0x80571398u) + 0x1a0u);
    if ((s32)r4 < 0 || (s32)r4 >= 70) {
    } else {
        a.r[0] = 0x8049c500u;
        a.r[1] = r4;
        r3 = tc_call(0x800c8974u, &a);
        r31 = r3 & 0xffffu;
        a.r[0] = 0x1eu;
        a.r[1] = 0xffffffffu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801f1e9cu, &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r31 + r3;
        (void)tc_call(0x80100bb4u, &a);
    }
    return 1u;
}
