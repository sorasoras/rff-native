#include "tc_rt.h"

void fn_80243534(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r7 = 0u;
    r31 = r3;
    r30 = rd32(0x804e6380u);
    if (r30 != 0u) {
        wr32(0x804e6380u, rd32(r30));
    }
    if (r30 == 0u) {
        r4 = 0x804e6400u;
        r5 = 0x804e6384u;
        r6 = 0x804e6404u;
        ctr = param_1 - 1u;
        if (param_1 > 1u) {
            do {
                r0 = rd32(r5);
                r30 = 0u;
                if (r0 != 0u) {
                    r7 = rd32(r6);
                    if (r0 != r7) {
                        if (r7 != 0u) {
                            r4 = rd32(r7 + 4u);
                            r30 = r7;
                            wr32(r6, r4);
                            wr32(r4, 0u);
                        }
                    } else {
                        wr32(r6, 0u);
                        r30 = r0;
                        wr32(r5, 0u);
                    }
                }
                if (r30 != 0u) {
                    if ((u32)rd16(r30 + 0x38u) == 1u) {
                        wr32(r30 + 0x20u, 1u);
                    }
                    r12 = rd32(r30 + 0x10u);
                    if (r12 == 0u) break;
                    a.r[0] = r30;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                    break;
                }
                r5 = r5 + 4u;
                r6 = r6 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    if (r30 != 0u) {
        r5 = (param_1 << 2u) & 0xfffffffcu;
        r3 = rd32(r5 - 0x7fb19c80u);
        wr32(r30, r3);
        wr32(r30 + 4u, 0u);
        if (r3 == 0u) {
            wr32(r5 - 0x7fb19c80u, r30);
            wr32(r5 - 0x7fb19c00u, r30);
        } else {
            wr32(rd32(r5 - 0x7fb19c80u) + 4u, r30);
            wr32(r5 - 0x7fb19c80u, r30);
        }
        wr32(r30 + 0xcu, param_1);
        wr32(r30 + 0x10u, param_2);
        wr32(r30 + 0x14u, (u32)param_3);
        a.r[0] = r30;
        (void)tc_call(0x80245ef8u, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
