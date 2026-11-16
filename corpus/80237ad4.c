#include "tc_rt.h"

void fn_80237ad4(void)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x805715f4u, 0u);
    if (rd32(0x805715e8u) != 0u) {
        r3 = tc_call(0x8023cab8u, &a);
        if ((r3 & 1u) != 0u) {
            return;
        }
        a.r[0] = 0x804e5bc0u;
        (void)tc_call(0x80226a70u, &a);
        wr32(0x805715e8u, 0u);
        wr32(0x805715e8u, 0u);
        if (rd32(0x80571644u) == 3u) {
            wr32(0x805715f0u, 1u);
        }
        if (rd32(0x80571630u) == 2u) {
            r3 = rd32(0x80571650u);
            if (r3 == 0u) {
                return;
            }
            wr32(r3 + 0xcu, 0xcu);
            return;
        }
        f1 = tc_callf(0x8023cdb8u, &a);
        r3 = rd32(0x80571650u);
        if (r3 != 0u) {
            wr32(r3 + 0xcu, 3u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[7] = 0u;
            (void)tc_call(0x80237184u, &a);
            return;
        }
        wr32(0x805715d4u, 7u);
    } else {
        r3 = tc_call(0x8023cab8u, &a);
        if ((r3 & 1u) != 0u) {
            r0 = rd32(0x80571630u);
            wr32(0x805715e4u, 0u);
            wr32(0x805715e8u, 1u);
            if (r0 == 2u) {
                wr32(rd32(0x80571650u) + 0xcu, 0xcu);
                return;
            }
            wr32(rd32(0x80571650u) + 0xcu, 5u);
        } else {
            r3 = tc_call(0x8023cab8u, &a);
            if ((r3 & 4u) != 0u) {
                a.r[0] = 0x804e5bc0u;
                f1 = tc_callf(0x80226a70u, &a);
                wr32(0x805715e4u, 0u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8023cdc0u, &a);
                wr32(0x805715e8u, 0u);
                if (rd32(0x80571644u) == 3u) {
                    wr32(0x805715f0u, 1u);
                }
                if (rd32(0x80571630u) == 2u) {
                    r3 = rd32(0x80571650u);
                    if (r3 == 0u) {
                        return;
                    }
                    wr32(r3 + 0xcu, 0xcu);
                } else {
                    f1 = tc_callf(0x8023cdb8u, &a);
                    r3 = rd32(0x80571650u);
                    if (r3 != 0u) {
                        wr32(r3 + 0xcu, 3u);
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[7] = 0u;
                        (void)tc_call(0x80237184u, &a);
                    } else {
                        wr32(0x805715d4u, 7u);
                    }
                }
            }
        }
    }
    return;
}
