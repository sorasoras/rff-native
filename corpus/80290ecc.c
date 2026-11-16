#include "tc_rt.h"

void fn_80290ecc(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(0x8053d94cu) != 0u) {
        if ((u32)rd8(0x8053d955u) == 0u) {
            wr8(0x817fdfe8u, 0u);
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            r3 = tc_call(0x802a2d8cu, &a);
            if ((r3 & 0xffu) != 0u) {
                wr8(0x817fdfe8u, 6u);
            }
            r30 = 0u;
            do {
                a.r[0] = ((r30 << 5u) & 0x1fe0u) - 0x7fac28c4u;
                (void)tc_call(0x8028d9f0u, &a);
                r30 = r30 + 1u;
            } while (r30 < 0x10u);
            a.r[0] = 0x8053d950u;
            f1 = tc_callf(0x8028d9f0u, &a);
            a.r[0] = 1u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(rd32(0x8053d94cu), &a);
            a.r[0] = 0x8053d728u;
            a.r[1] = 0u;
            a.r[2] = 0x230u;
            (void)tc_call(0x8000443cu, &a);
        } else {
            r30 = 0u;
            wr8(0x8053d956u, 1u);
            do {
                r3 = ((r30 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if ((u32)rd8(r3 + 0x2cu) == 3u) {
                    r3 = r3 + 0x10u;
                    a.r[0] = r3;
                    a.r[1] = 0x1701u;
                    a.r[2] = 0u;
                    (void)tc_call(0x80292870u, &a);
                }
                r30 = r30 + 1u;
            } while (r30 < 0x10u);
        }
    }
    return;
}
