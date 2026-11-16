#include "tc_rt.h"

void fn_80189908(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r27 = 0u;
    r28 = (u32)param_1;
    do {
        r3 = rd32(r28 + 0x3fcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
            r4 = tc_lastr4();
            r3 = rd32(r28 + 0x3fcu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
                r4 = tc_lastr4();
            }
            wr32(r28 + 0x3fcu, 0u);
        }
        r3 = rd32(r28 + 0x3a0u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            f1 = tc_callf(0x8004bc54u, &a);
            r4 = tc_lastr4();
            wr32(r28 + 0x3a0u, 0xffffffffu);
        }
        r27 = r27 + 1u;
        r28 = r28 + 4u;
    } while (r27 < 0x17u);
    r28 = rd32((u32)param_1 + 0x458u);
    if (r28 != 0u) {
        r3 = tc_call(0x80083e38u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r28;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r28;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        wr32((u32)param_1 + 0x458u, 0u);
    }
    r3 = rd32((u32)param_1 + 0x464u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32((u32)param_1 + 0x464u, 0xffffffffu);
    }
    r28 = rd32((u32)param_1 + 0x460u);
    if (r28 != 0u) {
        r3 = tc_call(0x80083e38u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r28;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r28;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        wr32((u32)param_1 + 0x460u, 0u);
    }
    return;
}
