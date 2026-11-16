#include "tc_rt.h"

void fn_801cbd84(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)param_2 * 0x2c8u;
    r30 = (u32)param_1 + r0;
    wr32((u32)param_1 + r0, (u32)param_3);
    r31 = rd32((u32)param_1 + 0x858u) + ((u32)param_3 * 0x50u);
    a.r[0] = (u32)param_1;
    a.r[1] = r31;
    a.r[2] = r30 + 0x40u;
    r3 = tc_call(0x801cbe6cu, &a);
    wr32(r30 + 0x2bcu, r3);
    a.r[0] = (u32)param_1;
    a.r[1] = r31 + 0x28u;
    a.r[2] = r30 + 0x168u;
    r3 = tc_call(0x801cbf9cu, &a);
    wr32(r30 + 0x2c0u, r3);
    a.r[0] = (u32)param_1;
    a.r[1] = r31 + 0x3cu;
    a.r[2] = r30 + 0x1ecu;
    r3 = tc_call(0x801cc080u, &a);
    wr32(r30 + 0x2c4u, r3);
    if (rd32(r30 + 0x2bcu) != 0u) {
        r3 = tc_call(0x802f08ccu, &a);
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = r30 + 0x40u;
        (void)tc_call(0x802f11f0u, &a);
    }
    if (rd32(r30 + 0x2c0u) != 0u) {
        r3 = tc_call(0x802f08ccu, &a);
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = r30 + 0x168u;
        (void)tc_call(0x802f11f0u, &a);
    }
    if (rd32(r30 + 0x2c4u) != 0u) {
        r3 = tc_call(0x802f08ccu, &a);
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = r30 + 0x1ecu;
        (void)tc_call(0x802f11f0u, &a);
    }
    return;
}
