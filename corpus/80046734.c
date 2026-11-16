#include "tc_rt.h"

u32 fn_80046734(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0;
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
    r8 = param_r8;
    r9 = param_r9;
    if (rd32(0x803c1de0u) != 0u && (u32)rd8(0x803c1de4u) == 0u) {
        if ((s32)param_1 <= 0) {
            r0 = rd32(0x803c1d94u);
            wr32(0x803c1dfcu, rd32(0x803c1da4u));
            wr32(0x803c1e00u, r0);
            wr32(0x803c1e04u, param_1);
        } else {
            r4 = rd32(0x803c1da0u);
            if (r4 == 0u) {
                r3 = 0u;
                return r3;
            }
            if (rd32(0x803c1d90u) <= param_1) {
                r3 = 0u;
                return r3;
            }
            r6 = r4 + (((param_1 - 1u) << 2u) & 0xfffffffcu);
            do {
                if (rd32(0x803c1df0u) != 0u) {
                    r0 = rd32(0x803c1df4u);
                    if (r0 != 0u) {
                        a.r[0] = 0x803c1f40u;
                        a.r[1] = r0 + r6;
                        a.r[2] = 0x20u;
                        f1 = tc_callf(0x80004338u, &a);
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
                        break;
                    }
                }
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x803c1d40u;
                a.r[1] = 0x803c1f40u;
                a.r[2] = 0x20u;
                a.r[3] = r6;
                a.r[4] = 2u;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                r3 = tc_call(0x80234ea0u, &a);
                f1 = tc_lastf();
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
                if ((s32)r3 < 0) {
                    r3 = 0u;
                    return r3;
                }
            } while (0);
            r3 = rd32(0x803c1f40u);
            r4 = rd32(0x803c1da4u);
            r0 = rd32(0x803c1f44u) - r3;
            wr32(0x803c1e04u, param_1);
            r3 = r4 + r3;
            wr32(0x803c1dfcu, r3);
            wr32(0x803c1e00u, r0);
        }
        if ((u32)rd8(0x803c1de7u) != 0u) {
            if ((s32)param_3 < 0 || param_3 >= rd32(0x803c1dd8u)) {
                r3 = 0u;
                return r3;
            }
            wr32(0x803c1e2cu, param_3);
        }
        r0 = rd32(0x803c1df0u);
        wr8(0x803c1de6u, (u8)(param_2 & 1u));
        wr32(0x803c1e18u, 0u);
        if (r0 == 0u) {
            a.r[0] = 0x14u;
            a.r[1] = 0u;
            (void)tc_call(0x80048e50u, &a);
            if ((u32)rd8(0x803c1de7u) != 0u) {
                a.r[0] = 0xcu;
                a.r[1] = 0u;
                (void)tc_call(0x80049350u, &a);
            }
            a.r[0] = 2u;
            (void)tc_call(0x80048ba8u, &a);
        } else {
            r4 = rd32(0x803c1df4u);
            if (r4 == 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x803c1d40u;
                a.r[1] = rd32(0x803c1df8u);
                a.r[2] = rd32(0x803c1d98u);
                a.r[3] = rd32(0x803c1da4u);
                a.r[4] = 2u;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                r3 = tc_call(0x80234ea0u, &a);
                if ((s32)r3 < 0) {
                    r3 = 0u;
                    return r3;
                }
            } else {
                r4 = r4 + rd32(0x803c1da4u);
                a.r[0] = rd32(0x803c1df8u);
                a.r[1] = r4;
                a.r[2] = rd32(0x803c1d98u);
                (void)tc_call(0x80004338u, &a);
            }
            r30 = rd32(0x803c1df8u) + rd32(0x803c1dfcu) - rd32(0x803c1da4u);
            a.r[0] = 0x14u;
            a.r[1] = r30;
            (void)tc_call(0x80048e50u, &a);
            if ((u32)rd8(0x803c1de7u) != 0u) {
                a.r[0] = 0xcu;
                a.r[1] = r30;
                (void)tc_call(0x80049350u, &a);
            }
        }
        wr32(0x803c1e30u, 0xffffffffu);
        wr32(0x803c1e34u, 0u);
        (void)tc_call(0x80046600u, &a);
        (void)tc_call(0x80048f24u, &a);
        if ((u32)rd8(0x803c1de7u) != 0u) {
            (void)tc_call(0x80049420u, &a);
        }
        if (rd32(0x803c1df0u) == 0u) {
            (void)tc_call(0x80048c48u, &a);
        }
    }
    r3 = 1u;
    wr8(0x803c1de4u, 2u);
    return r3;
}
