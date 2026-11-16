#include "tc_rt.h"

void fn_801b97d8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    a.r[0] = (u32)param_1 + 0x38u;
    f1 = tc_callf(0x80163f60u, &a);
    r4 = tc_lastr4();
    r31 = 0u;
    do {
        r3 = rd32(r30 + 0x1e8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x20u), &a);
        r4 = tc_lastr4();
        r31 = r31 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r31 < 5);
    return;
}
