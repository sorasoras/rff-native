#include "tc_rt.h"

void fn_801ce20c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0u;
    do {
        r3 = rd32(rd32((u32)param_1 + 0x324u) + r31);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x1a4u), &a);
        r4 = tc_lastr4();
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while (r30 < 0xau);
    return;
}
