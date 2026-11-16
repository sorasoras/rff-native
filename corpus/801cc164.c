#include "tc_rt.h"

void fn_801cc164(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    r31 = (u32)param_1 + ((u32)param_2 * 0x2c8u);
    if (rd32(r31 + 0x2bcu) != 0u) {
        a.r[0] = r31 + 0x40u;
        a.r[1] = (u32)param_2;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r31 + 0x40u) + 0x20u), &a);
        a.r[0] = rd32(r31 + 0x2bcu);
        f1 = tc_callf(0x8004fb5cu, &a);
        r4 = tc_lastr4();
        wr32(r31 + 0x2bcu, 0u);
    }
    if (rd32(r31 + 0x2c0u) != 0u) {
        a.r[0] = r31 + 0x168u;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r31 + 0x168u) + 0x20u), &a);
        a.r[0] = rd32(r31 + 0x2c0u);
        f1 = tc_callf(0x8004fb5cu, &a);
        r4 = tc_lastr4();
        wr32(r31 + 0x2c0u, 0u);
    }
    if (rd32(r31 + 0x2c4u) != 0u) {
        a.r[0] = r31 + 0x1ecu;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r31 + 0x1ecu) + 0x20u), &a);
        a.r[0] = rd32(r31 + 0x2c4u);
        (void)tc_call(0x8004fb5cu, &a);
        wr32(r31 + 0x2c4u, 0u);
    }
    return;
}
