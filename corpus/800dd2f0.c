#include "tc_rt.h"

void fn_800dd2f0(f64 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_2;
    r30 = 0u;
    do {
        r3 = rd32(r31 + 4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = param_1;
            f1 = tc_callf(rd32(rd32(r3 + 8u) + 8u), &a);
            r4 = tc_lastr4();
            wrf32d(rd32(r31 + 4u), f1);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 10);
    return;
}
