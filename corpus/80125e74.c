#include "tc_rt.h"

void fn_80125e74(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x34u) != 0u) {
        r30 = 0u;
        r31 = 0u;
        while ((s32)r30 < (s32)rd32((u32)param_1 + 0xcu)) {
            r3 = rd32((u32)param_1 + 0x34u) + r31;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0xccu) + 0x18u), &a);
            r31 = r31 + 0xd0u;
            r30 = r30 + 1u;
        }
        a.r[0] = rd32((u32)param_1 + 0x34u);
        a.r[1] = 0x80125964u;
        a.r[2] = 0x80122258u;
        a.r[3] = 0u;
        (void)tc_call(0x80255794u, &a);
        wr32((u32)param_1 + 0x34u, 0u);
    }
    f1 = tc_callf(0x801909d8u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x314u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80164328u, &a);
    (void)tc_call(0x801e656cu, &a);
    return;
}
