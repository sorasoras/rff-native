#include "tc_rt.h"

void fn_802014e8(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x3cu);
    a.r[1] = rd32((u32)param_1 + 0x38u);
    a.r[2] = 1u;
    f1 = tc_callf(0x800f8f10u, &a);
    r4 = tc_lastr4();
    r3 = rd32((u32)param_1 + 0x2cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x20u), &a);
        r4 = tc_lastr4();
    }
    r3 = rd32((u32)param_1 + 0x30u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x20u), &a);
    }
    return;
}
