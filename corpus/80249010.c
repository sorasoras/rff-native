#include "tc_rt.h"

void fn_80249010(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = param_1;
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r29 = r3;
    r30 = 0u;
    wr32(param_1 + 0x7cu, rd32(param_1 + 0x7cu) | 1u);
    do {
        r3 = rd32(r28);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(0x80570b7cu), &a);
            r4 = tc_lastr4();
        }
        r30 = r30 + 1u;
        wr32(r28, 0u);
        r28 = r28 + 4u;
    } while (r30 < 3u);
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
