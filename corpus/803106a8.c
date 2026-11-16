#include "tc_rt.h"

void fn_803106a8(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r31 = (u32)param_2 + 0x90u;
    r30 = 0u;
    for (;;) {
        a.r[0] = r31;
        a.r[1] = r30;
        r3 = tc_call(0x802de9f0u, &a);
        r30 = r3;
        if (r3 == 0u) break;
        r3 = r3;
        a.r[0] = r3;
        f1 = tc_callf(0x8031f130u, &a);
        a.r[0] = r30;
        a.r[1] = param_3;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r30 + 0x1cu) + 0x1cu), &a);
        (void)tc_call(0x8031f228u, &a);
    }
    return;
}
