#include "tc_rt.h"

void fn_8029133c(s32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)rd8(0x80571b80u) >= 5u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x504u;
        a.r[1] = 0x80392c40u;
        a.r[2] = (u32)rd8(param_2);
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc6cu, &a);
    }
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0u;
    a.r[2] = 8u;
    (void)tc_call(0x8000443cu, &a);
    wr8(0x817fdfefu, rd8((u32)param_1 + 0x16u));
    a.r[0] = 0x817fdfe8u;
    a.r[1] = (u32)param_1 + 8u;
    f1 = tc_callf(0x8028d2a4u, &a);
    r31 = (u32)rd8(param_2);
    if (r31 == 0u) {
        if ((u32)rd8((u32)param_1 + 0x19u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x170bu;
            a.r[2] = 0u;
            f1 = tc_callf(0x80292870u, &a);
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80570e28u;
            a.r[1] = (u32)rd8((u32)param_1 + 0x14u);
            f1 = tc_callf(0x802a330cu, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)rd8((u32)param_1 + 0x16u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802a30c8u, &a);
            f1 = tc_lastf();
            r5 = r3 & 0xffu;
            r31 = r3;
            if (r5 != 0u) {
                if ((u32)rd8(0x80571b80u) >= 5u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x504u;
                    a.r[1] = 0x80392c60u;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc6cu, &a);
                }
                a.r[0] = (u32)rd8((u32)param_1 + 0x16u);
                f1 = tc_callf(0x802a3000u, &a);
            }
        }
    }
    if ((r31 & 0xffu) != 0u) {
        if ((u32)rd8(param_2) != 0xffu) {
            wr8(0x817fdfeeu, 7u);
        } else {
            wr8(0x817fdfeeu, 0xau);
        }
        a.r[0] = 2u;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 0x8053d728u;
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
        a.r[0] = (u32)param_1;
        a.r[1] = 0x1701u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80292870u, &a);
        if ((u32)rd8((u32)param_1 + 0x15u) == 0u && (u32)rd8((u32)param_1 + 0x19u) == 0u) {
            a.r[0] = (u32)param_1;
            f1 = tc_callf(0x80292f00u, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80293090u, &a);
    }
    return;
}
