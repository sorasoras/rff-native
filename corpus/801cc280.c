#include "tc_rt.h"

void fn_801cc280(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x20u);
    if (rd32(r31 + 0x2bcu) != 0u) {
        r3 = tc_call(0x802f08ccu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r31 + 0x2b8u);
        a.r[2] = r31 + 0x40u;
        (void)tc_call(0x802f11f0u, &a);
    }
    r31 = rd32((u32)param_1 + 0x20u);
    if (rd32(r31 + 0x2c0u) != 0u) {
        r3 = tc_call(0x802f08ccu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r31 + 0x2b8u);
        a.r[2] = r31 + 0x168u;
        (void)tc_call(0x802f11f0u, &a);
    }
    r31 = rd32((u32)param_1 + 0x20u);
    if (rd32(r31 + 0x2c4u) != 0u) {
        r3 = tc_call(0x802f08ccu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r31 + 0x2b8u);
        a.r[2] = r31 + 0x1ecu;
        (void)tc_call(0x802f11f0u, &a);
    }
    return;
}
