#include "tc_rt.h"

void fn_80290c2c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r27 = 0, r28 = 0, r29 = 0;
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
    r27 = 0u;
    do {
        r29 = ((r27 << 5u) & 0x1fe0u) - 0x7fac2a0cu;
        if ((u32)rd8(r29 + 0xb6u) != 0u) {
            a.r[0] = r29 + 0xb0u;
            a.r[1] = param_r3 + 8u;
            r3 = tc_call(0x8028d2d8u, &a);
            f1 = tc_lastf();
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
            if (r3 == 0u) {
                a.r[0] = r29 + 0x98u;
                f1 = tc_callf(0x8028d78cu, &a);
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
                wr8(r29 + 0xb6u, 0u);
                break;
            }
        }
        r27 = r27 + 1u;
    } while (r27 < 3u);
    if ((u32)rd8(param_r3 + 0xeu) == 0u) {
        if ((u32)rd8(param_r3 + 0x12u) == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = param_r3 + 8u;
            a.r[1] = 0u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8029073cu, &a);
        } else {
            r29 = 0u;
            for (;;) {
                if ((r29 & 0xffu) >= (u32)rd8(0x8053d641u)) {
                    return;
                }
                r28 = (r29 & 0xffu) * 0xbu;
                a.r[0] = r28 - 0x7fac2a0cu;
                a.r[1] = param_r3 + 8u;
                r3 = tc_call(0x8028d2d8u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) break;
                r29 = r29 + 1u;
            }
            r5 = r28 - 0x7fac2a0cu;
            r6 = (u32)rd8(r5 + 9u) & 3u;
            if (r6 != 0u) {
                wr8(r5 + 0xau, (u8)((u32)rd8(r5 + 0xau) | r6));
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_r3 + 8u;
                a.r[1] = 0u;
                a.r[3] = r6;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8029073cu, &a);
            }
        }
    }
    return;
}
