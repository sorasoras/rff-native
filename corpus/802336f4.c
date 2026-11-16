#include "tc_rt.h"

void fn_802336f4(void)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x803359c0u;
    for (;;) {
        r12 = rd32(r31);
        if (r12 == 0u) break;
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(r12, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r31 = r31 + 4u;
    }
    (void)tc_call(0x802250a8u, &a);
    return;
}
