#include "tc_rt.h"

u32 fn_802a5574(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
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
    if ((u32)rd8(0x80540a20u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80002u;
        a.r[1] = 0x803955b0u;
        a.r[2] = param_1;
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
    if ((rd32(param_2 + 0x10u) == 0u || rd32(param_2 + 0xcu) == 0u) || (rd32(param_2 + 0x20u) == 0u || rd32(param_2 + 0x14u) == 0u)) {
        if ((u32)rd8(0x80540a20u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80000u;
            a.r[1] = 0x803955e0u;
            a.r[2] = param_1;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
        r3 = 0u;
    } else {
        if ((param_1 & 0x101u) != 1u) {
            if ((u32)rd8(0x80540a20u) >= 1u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x80000u;
                a.r[1] = 0x80395608u;
                a.r[2] = param_1;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc6cu, &a);
            }
            r3 = 0u;
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x802aaf40u, &a);
            r5 = r3;
            if (r3 == 0u) {
                a.r[0] = param_1;
                r3 = tc_call(0x802aaee4u, &a);
                f1 = tc_lastf();
                r5 = r3;
                if (r3 == 0u) {
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
                        a.r[1] = 0x80395630u;
                        a.r[2] = param_1;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc6cu, &a);
                    }
                    r3 = 0u;
                    return r3;
                }
            }
            r3 = 1u;
            r0 = rd32(param_2 + 4u);
            wr32(r5 + 4u, rd32(param_2));
            wr32(r5 + 8u, r0);
            r0 = rd32(param_2 + 0xcu);
            wr32(r5 + 0xcu, rd32(param_2 + 8u));
            wr32(r5 + 0x10u, r0);
            r0 = rd32(param_2 + 0x14u);
            wr32(r5 + 0x14u, rd32(param_2 + 0x10u));
            wr32(r5 + 0x18u, r0);
            r0 = rd32(param_2 + 0x1cu);
            wr32(r5 + 0x1cu, rd32(param_2 + 0x18u));
            wr32(r5 + 0x20u, r0);
            r0 = rd32(param_2 + 0x24u);
            wr32(r5 + 0x24u, rd32(param_2 + 0x20u));
            wr32(r5 + 0x28u, r0);
        }
    }
    return r3;
}
