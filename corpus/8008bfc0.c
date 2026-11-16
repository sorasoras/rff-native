#include "tc_rt.h"

void fn_8008bfc0(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1 + (rd32((u32)param_1 + 0x4150u) * 0x4150u);
    r30 = rd32(r31 + 8u);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r3 = rd32(r3 + 8u);
        if ((u32)((s32)rd32(r3 + 0x80u) >> 31) != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
            r4 = tc_lastr4();
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x801e6900u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8008c9e8u, &a);
    return;
}
