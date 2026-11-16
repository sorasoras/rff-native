#include "tc_rt.h"

void fn_80293524(u32 param_1)
{
    u32 r3 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0x8053d98cu;
    for (;;) {
        if ((u32)rd8(r30 + 0x119u) != 0u) {
            a.r[0] = r30 + 8u;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) break;
        }
        r31 = r31 + 1u;
        r30 = r30 + 0x11cu;
        if (r31 >= 4u) {
            r30 = 0u;
            break;
        }
    }
    if (r30 != 0u) {
        wr8(r30 + 0x119u, 0u);
        r12 = rd32(0x8053de20u);
        if (r12 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
