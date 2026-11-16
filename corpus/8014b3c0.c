#include "tc_rt.h"

void fn_8014b3c0(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xcu) != 0u) {
        a.r[0] = (u32)param_1 + 0x10u;
        f1 = tc_callf(0x800f8388u, &a);
        r31 = (u32)param_1 + 0x50u;
        wr32((u32)param_1 + 0xcu, 0u);
        r30 = 0u;
        do {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r31;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x80164328u, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0xcu;
        } while ((s32)r30 < 14);
    }
    return;
}
