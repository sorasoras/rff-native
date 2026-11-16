#include "tc_rt.h"

void fn_802a96ac(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd16(0x805411e8u) != 0u) {
        if (param_r3 != 0u) {
            if ((u32)rd8(0x80540a20u) >= 2u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x80001u;
                a.r[1] = 0x80396ad0u;
                a.r[2] = param_r5;
                a.r[3] = param_r6;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x8028cc54u, &a);
            }
        } else {
            a.r[0] = 0x805411ecu;
            f1 = tc_callf(0x8028d290u, &a);
            if ((u32)rd8(0x80540a20u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80001u;
                a.r[1] = 0x80396abcu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
        }
        a.r[0] = 0x805411e0u;
        r3 = tc_call(0x8028ab5cu, &a);
        r30 = r3;
        while (r30 != 0u) {
            a.r[0] = r30;
            r3 = tc_call(0x8028ab64u, &a);
            r29 = r3;
            if (param_r3 != 0u) {
                r3 = (u32)rd16(r30 + 6u);
                if (r3 != 0u) {
                    r3 = r3 - 1u;
                    wr16(r30 + 6u, (u16)r3);
                    if ((r3 & 0xffffu) != 0u) {
                        r30 = r29;
                        continue;
                    }
                }
            }
            a.r[0] = 0x805411e0u;
            a.r[1] = r30;
            f1 = tc_callf(0x8028aa98u, &a);
            wr16(r30 + 6u, 0xffffu);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802a88bcu, &a);
            r30 = r29;
        }
        if ((u32)rd16(0x805411e8u) != 0u) {
            a.r[0] = 0x805411ecu;
            a.r[1] = 4u;
            a.r[2] = 1u;
            (void)tc_call(0x8028d220u, &a);
        }
    }
    return;
}
