#include "tc_rt.h"

u32 fn_80311f34(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0xbcu);
    r3 = rd32(r5 + 0x9cu);
    a.r[0] = r3;
    a.r[1] = r5;
    a.r[2] = (u32)param_2;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
    r4 = tc_lastr4();
    r3 = rd32((u32)param_2 + 0x20u);
    r0 = rd32(r3 + 0x10u) - 1u;
    wr32(r3 + 0x10u, r0);
    if (r0 == 0u && rd32(r3 + 0xcu) == 2u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x1cu) + 8u), &a);
    }
    a.r[0] = (u32)param_1 + 0xc0u;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802de984u, &a);
    a.r[0] = (u32)param_1 + 0xccu;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802de7f4u, &a);
    wr32((u32)param_2 + 0xcu, 3u);
    return 1u;
}
