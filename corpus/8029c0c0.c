#include "tc_rt.h"

void fn_8029c0c0(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r12 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802952a8u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if ((u32)rd8(0x80540118u) >= 4u) {
        if (r3 != 0u) {
            r6 = (u32)rd8(r3 + 0x7fu);
        } else {
            r6 = 0u;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x80394870u;
        a.r[2] = (u32)param_2;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc84u, &a);
    }
    if (r30 != 0u) {
        if ((u32)param_2 == 0x23u) {
            wr32(0x8053f290u, r30);
            wr32(0x8053f2c4u, 0x8029d4acu);
            a.r[0] = 0x8053f2b4u;
            a.r[1] = 0x16u;
            a.r[2] = 1u;
            (void)tc_call(0x8028d220u, &a);
        } else {
            if ((u32)param_2 != 0u) {
                r12 = rd32(r30 + 4u);
                if (r12 == 0u) {
                    return;
                }
                a.r[0] = r30 + 0x1cu;
                a.r[1] = rd32(r30 + 8u);
                a.r[2] = 0xau;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
                wr32(r30 + 4u, 0u);
            } else {
                wr8(r30 + 0x76u, (u8)((u32)rd8(r30 + 0x76u) | 6u));
                if ((u32)rd8(r30 + 0x7fu) == 2u) {
                    wr8(r30 + 0x7fu, 0u);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r30;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x8029cfb0u, &a);
                    f1 = tc_lastf();
                    r5 = r3 & 0xffu;
                    if (r5 != 1u) {
                        r12 = rd32(r30 + 4u);
                        if (r12 != 0u) {
                            a.r[0] = r30 + 0x1cu;
                            a.r[1] = rd32(r30 + 8u);
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(r12, &a);
                            wr32(r30 + 4u, 0u);
                        }
                    }
                }
            }
        }
    }
    return;
}
