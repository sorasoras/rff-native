#include "tc_rt.h"

void fn_802c1ba0(void)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x80547478u);
    if (r3 != 0u) {
        r3 = r3 + 0x10000u;
        r3 = r3 + 0x4680u;
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 0u;
        f1 = tc_callf(0x8022caacu, &a);
        r4 = tc_lastr4();
        r3 = rd32(0x80547478u) + 0x10000u;
        r12 = rd32(r3 + 0x4348u);
        if (r12 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
