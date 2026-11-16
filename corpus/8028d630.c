#include "tc_rt.h"

void fn_8028d630(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r31 = 0;
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
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r31 = 1u;
    if ((u32)rd8(0x80571b80u) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x503u;
        a.r[1] = 0x803929a0u;
        a.r[2] = (u32)rd16(param_1);
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc6cu, &a);
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
    r4 = (u32)rd16(param_1);
    r5 = (u32)((s32)r4 >> 8);
    if ((u32)rd8(0x8053d536u) == 0u) {
        do {
            if ((r5 & 0xffu) < 0x1au) {
                r3 = rd32(((r5 << 2u) & 0x3fcu) - 0x7fac2b48u);
                if (r3 != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    r3 = tc_call(rd32(r3), &a);
                    r31 = r3;
                    break;
                }
            }
            if ((u32)rd8(0x80571b80u) >= 2u) {
                r5 = r5 & 0xffu;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x501u;
                a.r[1] = 0x803929b4u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc6cu, &a);
            }
        } while (0);
        if ((r31 & 0xffu) != 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x8028a35cu, &a);
        }
    } else {
        if (r4 == 0x101u) {
            (void)tc_call(0x8028fd00u, &a);
        }
        a.r[0] = param_1;
        (void)tc_call(0x8028a35cu, &a);
    }
    return;
}
