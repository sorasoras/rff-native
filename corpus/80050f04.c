#include "tc_rt.h"

void fn_80050f04(u32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r8 = 0, r9 = 0, r10 = 0;
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
    if (param_5 == 0u) {
        wr32(0x803c8640u, 0u);
        wr32(0x803c8644u, 0xffffffffu);
        wr32(0x803c8648u, 0u);
        wr32(0x803c864cu, 0u);
    } else {
        r9 = rd32(param_5 + 0xcu);
        r8 = rd32(param_5 + 8u);
        r6 = rd32(param_5 + 4u);
        wr32(0x803c8640u, rd32(param_5));
        wr32(0x803c8644u, r6);
        wr32(0x803c8648u, r8);
        wr32(0x803c864cu, r9);
    }
    r5 = rd32(0x803c864cu);
    if (r5 == 0u) {
        if ((u32)param_2 == 0u) {
            a.r[0] = param_3;
            r3 = tc_call(0x80037178u, &a);
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
        } else {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = (u32)param_2;
            a.r[4] = param_5;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = param_r10;
            r3 = tc_call(0x800371a8u, &a);
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
        }
        r5 = r3;
    }
    if (r5 != 0u) {
        if (rd32(param_1 + 0x10u) == 0u) {
            if (rd32(param_1 + 0x20u) == 0u) {
                a.r[0] = rd32(param_1);
                a.r[1] = r5;
                a.r[2] = rd32(param_1 + 0xcu);
                a.r[3] = param_1 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
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
            } else {
                a.r[0] = param_1 + 0x24u;
                a.r[1] = 0x20u;
                a.r[2] = r5;
                r3 = tc_call(0x80094e80u, &a);
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
            }
        } else {
            a.r[0] = rd32(param_1);
            a.r[1] = r5;
            a.r[2] = rd32(param_1 + 0xcu);
            a.r[3] = param_1 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
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
        }
    } else {
        r3 = 0u;
    }
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    a.r[0] = r3;
    a.r[1] = rd32(param_1 + 0xcu);
    a.r[2] = (u32)param_2;
    a.r[3] = param_3;
    a.r[4] = param_4;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    (void)tc_call(0x80051054u, &a);
    return;
}
