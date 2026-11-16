#include "tc_rt.h"

void fn_8023204c(void)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x800000dcu);
    while (r31 != 0u) {
        a.r[0] = r31;
        (void)tc_call(0x8022fe50u, &a);
        r31 = rd32(r31 + 0x2fcu);
    }
    r31 = rd32(0x80003128u) - 0x1320u;
    a.r[0] = r31;
    a.r[1] = 0x802323a4u;
    a.r[2] = 0u;
    a.r[3] = r31 + 0x1320u;
    a.r[4] = 0x1000u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    r3 = tc_call(0x8022f550u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8022e19cu, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022fbb8u, &a);
    return;
}
