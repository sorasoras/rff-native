#include "tc_rt.h"

void fn_800ab460(u32 param_1)
{
    u32 r3 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 4u;
    r29 = 1u;
    do {
        r3 = rd32(r31 - 0x7fb79c28u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_1;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0xa8u), &a);
        }
        r29 = r29 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 33);
    return;
}
