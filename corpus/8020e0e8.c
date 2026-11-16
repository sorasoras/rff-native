#include "tc_rt.h"

void fn_8020e0e8(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0x804df3d8u;
    r29 = 0u;
    do {
        r3 = rd32(r30);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            f1 = tc_callf(0x8004bc54u, &a);
            r4 = tc_lastr4();
            wr32(r30, 0xffffffffu);
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
    } while (r29 < 0x23u);
    r29 = 0u;
    r30 = 0x804df9e0u;
    do {
        r3 = rd32(r30);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
            r4 = tc_lastr4();
            r3 = rd32(r30);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
                r4 = tc_lastr4();
            }
            wr32(r30, 0u);
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
    } while (r29 < 0x21u);
    r30 = rd32(0x80571408u);
    if (r30 != 0u) {
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r30;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        wr32(0x80571408u, 0u);
    }
    (void)tc_call(0x8020dd44u, &a);
    return;
}
