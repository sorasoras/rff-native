#include "tc_rt.h"

void fn_801b9838(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        r3 = rd32(r31 + 0x1e8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x34u), &a);
        r4 = tc_lastr4();
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 5);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 2u;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
