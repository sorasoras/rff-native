#include "tc_rt.h"

void fn_802551d0(void)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    for (;;) {
        r3 = rd32(0x805719b0u);
        if (r3 == 0u) break;
        wr32(0x805719b0u, rd32(r3));
        r12 = rd32(r3 + 4u);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        a.r[1] = 0xffffffffu;
        a.f[0] = f1;
        f1 = tc_callf(r12, &a);
    }
    return;
}
