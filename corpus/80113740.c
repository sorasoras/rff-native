#include "tc_rt.h"

void fn_80113740(u32 param_1)
{
    u32 c0eq = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    for (;;) {
        wr32(r1 - 0x10u, r1);
        r1 = r1 - 0x10u;
        wr32(r1 + 0x14u, lr);
        wr32(r1 + 0xcu, r31);
        wr32(r1 + 8u, r30);
        r30 = 0u;
        r31 = rd32(r3);
        for (;;) {
            r4 = rd32(r31 + 0x40u);
            c0eq = r4 == 0u;
            if (!c0eq) {
                if (c0eq) {
                    r0 = 0xffffffffu;
                } else {
                    r0 = rd32(r31);
                }
                if (r0 != 4u) {
                    r3 = rd32(r31 + 0x48u);
                    if (r3 != 0u) {
                        r5 = r31 + ((rd32(r31 + 0x44u) << 2u) & 0xfffffffcu);
                        if (r4 == 0u) {
                            r4 = 0xffffffffu;
                        } else {
                            r4 = rd32(r31 + 4u);
                        }
                        r12 = rd32(r3 + 0x30u);
                        r12 = rd32(r12 + 0x14u);
                        lr = 0x801137bcu;
                        if (r12 == 0x80113740u) break;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.f[0] = f1;
                        f1 = tc_callf(r12, &a);
                        r3 = tc_lastr();
                    }
                }
            }
            r30 = r30 + 1u;
            r31 = r31 + 0x50u;
            if ((s32)r30 >= 96) {
                return;
            }
        }
    }
}
