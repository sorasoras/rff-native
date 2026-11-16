#include "tc_rt.h"

void fn_80125f80(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = rd32(param_1 + 0x10u);
    r31 = r30 * 0xd0u;
    while ((s32)r30 < (s32)(rd32(param_1) + rd32(param_1 + 0x10u))) {
        r3 = rd32(param_1 + 0x34u) + r31;
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 0xcu), &a);
        r4 = tc_lastr4();
        r31 = r31 + 0xd0u;
        r30 = r30 + 1u;
    }
    return;
}
