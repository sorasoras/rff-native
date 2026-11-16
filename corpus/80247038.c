#include "tc_rt.h"

void fn_80247038(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r25 = 0u;
    r30 = param_r3;
    r29 = param_r3;
    r28 = param_r3;
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
        r3 = rd32(r30 + 0x2cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(0x80570b7cu), &a);
            r4 = tc_lastr4();
            wr32(r30 + 0x2cu, 0u);
        }
        r27 = r29;
        r26 = 0u;
        do {
            r3 = rd32(r27 + 0x44u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(0x80570b7cu), &a);
                r4 = tc_lastr4();
                wr32(r27 + 0x44u, 0u);
            }
            r26 = r26 + 1u;
            r27 = r27 + 4u;
        } while (r26 < 3u);
        r27 = r28;
        r26 = 0u;
        do {
            r3 = rd32(r27 + 0x98u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(0x80570b7cu), &a);
                r4 = tc_lastr4();
                wr32(r27 + 0x98u, 0u);
            }
            r26 = r26 + 1u;
            r27 = r27 + 4u;
        } while (r26 < 2u);
        r3 = rd32(r30 + 0xc8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(0x80570b7cu), &a);
            r4 = tc_lastr4();
            wr32(r30 + 0xc8u, 0u);
        }
        r25 = r25 + 1u;
        r29 = r29 + 0xcu;
        r28 = r28 + 8u;
        r30 = r30 + 4u;
    } while (r25 < 3u);
    return;
}
