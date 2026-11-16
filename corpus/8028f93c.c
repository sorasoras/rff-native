#include "tc_rt.h"

void fn_8028f93c(s32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        r3 = rd32(0x80570de4u);
        r7 = 1u;
        r9 = (u32)rd8(r3 + 1u);
        while ((r7 & 0xffu) <= r9) {
            r8 = r3 + (((r7 << 2u) & 0x3fcu) - (r7 & 0xffu));
            r0 = (u32)rd8(r8 + 1u);
            if (param_3 == r0 || r0 == 0xffu) {
                if (param_2 == (u32)rd8(r8) && (u32)rd8(r8 + 2u) == 1u) {
                    r11 = (u32)rd8(r3 + 1u);
                    r10 = (u32)rd8(0x8053d6f8u);
                    r31 = 0u;
                    r29 = 1u;
                    while ((r29 & 0xffu) <= r11) {
                        r12 = r3 + (((r29 << 2u) & 0x3fcu) - (r29 & 0xffu));
                        if ((u32)rd8(r12 + 2u) == 2u) {
                            r30 = 0u;
                            while ((r30 & 0xffu) < r10) {
                                if ((u32)rd8(((r30 << 3u) & 0x7f8u) + (r30 & 0xffu) - 0x7fac2901u) == (u32)rd8(r12)) {
                                    r31 = 1u;
                                }
                                r30 = r30 + 1u;
                            }
                        }
                        r29 = r29 + 1u;
                    }
                    if (r31 != 0u) {
                        return;
                    }
                    r3 = (r7 & 0xffu) - 1u;
                    r31 = ((r3 << 3u) & 0xfffffff8u) + r3 - 0x7fac2ab8u;
                    wr8(r31 + 7u, (u8)param_3);
                    wr8(r31 + 6u, (u8)param_2);
                    a.r[0] = r31;
                    a.r[1] = param_4;
                    f1 = tc_callf(0x8028d2a4u, &a);
                    r0 = (u32)rd8(0x80571b80u);
                    wr8(r31 + 8u, 1u);
                    if (r0 < 4u) {
                        return;
                    }
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x503u;
                    a.r[1] = 0x80392a9cu;
                    a.r[2] = (u32)rd8(r31 + 7u);
                    a.r[3] = (u32)rd8(r31 + 6u);
                    a.r[4] = (u32)rd8(r31 + 8u);
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc9cu, &a);
                    return;
                }
            }
            r7 = r7 + 1u;
        }
    } else {
        if ((u32)param_1 == 1u) {
            r7 = rd32(0x80570de4u);
            r8 = 1u;
            r6 = (u32)rd8(r7 + 1u);
            while ((r8 & 0xffu) <= r6) {
                r3 = r7 + (((r8 << 2u) & 0x3fcu) - (r8 & 0xffu));
                r0 = (u32)rd8(r3 + 1u);
                if (param_3 == r0 || r0 == 0xffu) {
                    if (param_2 == (u32)rd8(r3)) {
                        r5 = (r8 & 0xffu) - 1u;
                        c0lt = (u32)rd8(0x80571b80u) < 4u;
                        r3 = ((r5 << 3u) & 0xfffffff8u) + r5 - 0x7fac2ab8u;
                        wr8(r3 + 8u, 0u);
                        if (c0lt) {
                            return;
                        }
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = 0x503u;
                        a.r[1] = 0x80392ad8u;
                        a.r[2] = (u32)rd8(r3 + 7u);
                        a.r[3] = (u32)rd8(r3 + 6u);
                        a.r[4] = (u32)rd8(r3 + 8u);
                        a.r[5] = r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x8028cc9cu, &a);
                        return;
                    }
                }
                r8 = r8 + 1u;
            }
        }
    }
    return;
}
