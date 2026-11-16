#include "tc_rt.h"

void fn_802a2d8c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, c1gt = 0, c6eq = 0, r0 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r27 = 0, r28 = 0;
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
    if ((u32)rd8(0x80540a18u) == 0u) {
        return;
    }
    r27 = 0u;
    do {
        c6eq = (u32)rd8(0x80540a18u) == 0u;
        if (!c6eq) {
            r0 = r27 & 0xffu;
            c1gt = r0 > 0x10u;
            if (!c1gt) {
                r0 = r0 * 0x34u;
                r28 = r0 - 0x7fabf9e8u;
                r0 = (u32)rd8(r0 - 0x7fabf9e8u);
                c0eq = r0 == 0u;
                if (!c0eq) {
                    if ((!c6eq && !c1gt) && !c0eq) {
                        wr8(r28 + 0xcu, 1u);
                        a.r[0] = r28 + 0x1cu;
                        f1 = tc_callf(0x8028d290u, &a);
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
                        if ((u32)rd8(r28 + 0xau) == 1u) {
                            wr8(r28 + 0xcu, 1u);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = r27 & 0xffu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            f1 = tc_callf(0x802a368cu, &a);
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
                    }
                    wr8(r28, 0u);
                    wr8(r28 + 0x10u, 0u);
                    wr16(r28 + 0x16u, 0u);
                    wr16(r28 + 0x14u, 0u);
                }
            }
        }
        r27 = r27 + 1u;
    } while (r27 < 0x10u);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    (void)tc_call(0x802a5548u, &a);
    wr8(0x80540a18u, 0u);
    return;
}
