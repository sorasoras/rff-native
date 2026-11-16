#include "tc_rt.h"

void fn_80311af0(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x10000u;
    r30 = (u32)param_3 * 0x1cu;
    r29 = 0u;
    for (;;) {
        a.r[0] = rd32(r31 - 0x3fe8u) + r30;
        a.r[1] = r29;
        r3 = tc_call(0x802de9f0u, &a);
        f1 = tc_lastf();
        r29 = r3;
        if (r3 == 0u) break;
        r12 = rd32(r3 + 0x1cu);
        r3 = r3;
        r12 = rd32(r12 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return;
}
