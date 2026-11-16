#include "tc_rt.h"

void fn_802e8a2c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    f1 = tc_callf(0x802e4c00u, &a);
    r4 = tc_lastr4();
    if (((u32)rd8((u32)param_1 + 0xbbu) & 1u) != 0u || (param_2 & 1u) == 0u) {
        r30 = 0u;
        r31 = 0u;
        while ((s32)r30 < (s32)rd8((u32)param_1 + 0x104u)) {
            r3 = rd32(rd32((u32)param_1 + 0x100u) + r31 + 4u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
            r4 = tc_lastr4();
            r31 = r31 + 8u;
            r30 = r30 + 1u;
        }
    }
    return;
}
