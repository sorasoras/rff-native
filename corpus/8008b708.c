#include "tc_rt.h"

void fn_8008b708(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r25 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 8u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r30 = rd32(r3 + 8u);
        r3 = rd32(r30 + 0x90u);
        if ((r3 & 5u) == 0u) {
            if ((r3 & 2u) == 0u) {
                if ((r3 & 0x400u) == 0u) {
                    if ((r3 & 0x3800u) == 0u) {
                        if ((r3 & 0x40u) != 0u) {
                            a.r[0] = r30;
                            f1 = tc_callf(0x800f3cf0u, &a);
                            r4 = tc_lastr4();
                        }
                    } else {
                        wr32(r30 + 0xb0u, 0u);
                        r3 = rd32(r30 + 0x90u);
                        if ((r3 & 0x800u) == 0u) {
                            if ((r3 & 0x1000u) == 0u) {
                                if ((r3 & 0x2000u) != 0u) {
                                    wr32(r30 + 0xacu, 3u);
                                }
                            } else {
                                wr32(r30 + 0xacu, 2u);
                            }
                        } else {
                            wr32(r30 + 0xacu, 1u);
                        }
                    }
                } else {
                    wr32(r30 + 0xb0u, 0u);
                }
            } else {
                a.r[0] = r30;
                f1 = tc_callf(0x800d1928u, &a);
                a.r[0] = r30;
                a.r[1] = tc_lastr4();
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r30) + 0x68u), &a);
                r4 = tc_lastr4();
            }
        } else {
            a.r[0] = r30;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r30) + 0x68u), &a);
            r4 = tc_lastr4();
            if ((rd32(r30 + 0x90u) & 0x400u) != 0u) {
                wr32(r30 + 0x144u, 0u);
            }
        }
    }
    r25 = rd32((u32)param_1 + 8u);
    while (r25 != 0u) {
        r3 = r25;
        r25 = rd32(r25);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x50u), &a);
        r4 = tc_lastr4();
    }
    return;
}
