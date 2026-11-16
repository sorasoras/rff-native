#include "tc_rt.h"

void fn_80237884(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r10 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    if (rd32(0x80571644u) == 0x28u) {
        wr32(0x805715d8u, 0u);
        if (rd32(0x805715d0u) != 0u) {
            r30 = rd32(0x80571650u);
            wr32(0x805715d4u, 0u);
            wr32(0x805715d0u, 0u);
            wr32(0x80571650u, 0x804e5b60u);
            wr32(r30 + 0xcu, 0xau);
            r12 = rd32(r30 + 0x28u);
            if (r12 != 0u) {
                a.r[0] = 0xfffffffdu;
                a.r[1] = r30;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[7] = param_r10;
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                f1 = tc_callf(r12, &a);
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
            }
            r12 = rd32(0x80571640u);
            if (r12 != 0u) {
                a.r[0] = 0u;
                a.r[1] = r30;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                (void)tc_call(r12, &a);
            }
            f1 = tc_callf(0x80237c80u, &a);
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r0 = 1u;
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            return;
        }
        wr32(rd32(0x80571650u) + 0xcu, 1u);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = rd32(0x80571650u);
        a.r[7] = r10;
        (void)tc_call(0x80237fa8u, &a);
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0u;
        a.r[7] = param_r10;
        (void)tc_call(0x8023cdc0u, &a);
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        if (rd32(0x805715c0u) >= 5u) {
            wr32(0x805715c0u, 0u);
        }
        r0 = rd32(0x805715c0u);
        r3 = rd32(0x805715c0u) * 0x14u;
        wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 5u);
        r3 = r3 - 0x7fb1a180u;
        r0 = r0 * 0x14u;
        wr32(r3 + 0x20u, 0u);
        wr32(r0 - 0x7fb1a15cu, 0x20u);
        r3 = tc_call(0x802302b4u, &a);
        r5 = rd32(0x805715c0u) * 0x14u;
        wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
        wr32(r5 - 0x7fb1a154u, r3);
        a.r[0] = r31;
        f1 = tc_callf(0x8022c2d8u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x804e5c00u;
        a.r[1] = 0x802379fcu;
        (void)tc_call(0x8023af08u, &a);
    }
    return;
}
