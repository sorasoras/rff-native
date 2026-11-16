#include "tc_rt.h"

void fn_802d3a64(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = param_4;
    r30 = 0u;
    r31 = 0u;
    while ((s32)r30 < (s32)rd8(param_1 + 0x100u)) {
        r3 = rd32(rd32(param_1 + 0xfcu) + r31 + 4u);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = r6;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x24u), &a);
        r6 = 0u;
        r31 = r31 + 8u;
        r30 = r30 + 1u;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    (void)tc_call(0x802d1674u, &a);
    return;
}
