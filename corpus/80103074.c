#include "tc_rt.h"

void fn_80103074(s32 param_1)
{
    u32 r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x80571248u);
    while (r31 != 0u) {
        r30 = r31;
        r31 = rd32(r31 + 0x3cu);
        a.r[0] = r30;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r30 + 0x34u) + 0x10u), &a);
        r4 = tc_lastr4();
        if (r30 != 0u) {
            a.r[0] = r30;
            f1 = tc_callf(0x801005b4u, &a);
            r4 = tc_lastr4();
        }
    }
    wr32((u32)param_1 + 4u, 0u);
    wr32(0x80571248u, 0u);
    wr32(0x8057124cu, 0u);
    return;
}
