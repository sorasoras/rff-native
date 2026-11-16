#include "tc_rt.h"

void fn_8024885c(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r26 = 0u;
    r30 = param_r3;
    r29 = param_r3;
    do {
        r3 = rd32(r30);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(0x80570b7cu), &a);
            r4 = tc_lastr4();
            wr32(r30, 0u);
        }
        r3 = rd32(r30 + 0x1cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(0x80570b7cu), &a);
            r4 = tc_lastr4();
            wr32(r30 + 0x1cu, 0u);
        }
        r28 = r29;
        r27 = 0u;
        do {
            r3 = rd32(r28 + 0x34u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(0x80570b7cu), &a);
                r4 = tc_lastr4();
                wr32(r28 + 0x34u, 0u);
            }
            r27 = r27 + 1u;
            r28 = r28 + 4u;
        } while (r27 < 2u);
        r28 = r29;
        r27 = 0u;
        do {
            r3 = rd32(r28 + 0x6cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(0x80570b7cu), &a);
                r4 = tc_lastr4();
                wr32(r28 + 0x6cu, 0u);
            }
            r27 = r27 + 1u;
            r28 = r28 + 4u;
        } while (r27 < 2u);
        r26 = r26 + 1u;
        r29 = r29 + 8u;
        r30 = r30 + 4u;
    } while (r26 < 3u);
    return;
}
