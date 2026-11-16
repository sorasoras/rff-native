#include "tc_rt.h"

void fn_800893e8(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 8u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r3 = rd32(r3 + 8u);
        if ((u32)((s32)rd32(r3 + 0x80u) >> 31) != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
        }
    }
    return;
}
