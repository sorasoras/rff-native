#include "tc_rt.h"

void fn_800938dc(s32 param_1)
{
    u32 r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x254u) != 3u) {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x800f35d4u, &a);
        r4 = tc_lastr4();
        r31 = (u32)param_1 + 0x26cu;
        r30 = 0u;
        do {
            a.r[0] = r31;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31) + 0x10u), &a);
            r4 = tc_lastr4();
            r30 = r30 + 1u;
            r31 = r31 + 0xacu;
        } while ((s32)r30 < 12);
    }
    return;
}
