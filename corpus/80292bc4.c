#include "tc_rt.h"

u32 fn_80292bc4(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r31 = 0;
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
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r6 = 0x10u;
    r31 = 0u;
    r0 = (u32)rd16(param_1);
    c0lt = (s32)r0 < 5902;
    if (r0 == 0x170eu) {
        (void)tc_call(0x80291f24u, &a);
    } else {
        if (!c0lt) {
            if ((s32)r0 < 5904) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[3] = 0x10u;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x80290fd0u, &a);
                return 1u;
            }
        } else {
            c0lt = (s32)r0 < 5900;
            if (r0 == 0x170cu) {
                a.r[0] = param_1;
                (void)tc_call(0x80290d58u, &a);
                return 1u;
            }
            if (!c0lt) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[3] = 0x10u;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x80290eccu, &a);
                return 1u;
            }
        }
        if (r0 != 0x1700u) {
            if (r0 != 0x170au) {
                r0 = (u32)rd16(param_1 + 6u);
                if (r0 < 0x10u) {
                    r6 = (u32)rd8(r0 - 0x7fac26c4u);
                }
            } else if ((u32)rd16(param_1 + 0x10u) != 0xbu) {
                r6 = (u32)rd8((u32)rd16(param_1 + 6u) - 0x7fac26c4u);
            } else {
                a.r[0] = param_1 + 8u;
                r3 = tc_call(0x80292dc4u, &a);
                f1 = tc_lastf();
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
                r6 = r3;
            }
        } else {
            a.r[0] = param_1 + 8u;
            r3 = tc_call(0x80292dc4u, &a);
            f1 = tc_lastf();
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
            r6 = r3;
        }
        if ((r6 & 0xffu) != 0x10u) {
            r31 = ((r6 << 5u) & 0x1fe0u) - 0x7fac28c8u;
        }
        if ((u32)rd8(0x80571b80u) >= 5u) {
            r6 = r6 & 0xffu;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x504u;
            a.r[1] = 0x8039316cu;
            a.r[2] = (u32)rd16(param_1 + 6u);
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc84u, &a);
        }
        a.r[0] = r31;
        a.r[1] = (u32)rd16(param_1);
        a.r[2] = param_1;
        (void)tc_call(0x80292870u, &a);
    }
    return 1u;
}
