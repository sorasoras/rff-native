#include "tc_rt.h"

void fn_80291074(s32 param_1, u32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = param_2;
    wr8(0x817fdfe8u, 0x10u);
    r31 = rd32(0x8053d938u);
    if ((u32)param_1 == 0u) {
        if ((u32)rd8(r31 + 0x14u) != 0u) {
            r29 = param_2 | 0x8000u;
        }
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
            a.r[1] = 0x80392b68u;
            a.r[2] = r31;
            a.r[3] = (u32)param_1;
            a.r[4] = r29 & 0xffffu;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc9cu, &a);
        }
        a.r[0] = r31;
        a.r[1] = (u32)rd8((u32)param_3 + 0x64u);
        r3 = tc_call(0x8029303cu, &a);
        if ((r3 & 0xffu) == 0u) {
            wr8(0x817fdfe8u, 0xffu);
        } else if ((u32)rd8(r31 + 0x16u) == 0xffu) {
            a.r[0] = r31 + 8u;
            a.r[1] = r29 & 0xffffu;
            a.r[2] = 0x817fdfe9u;
            r3 = tc_call(0x802a2e70u, &a);
            f1 = tc_lastf();
            wr8(0x817fdfe8u, (u8)r3);
            if ((r3 & 0xffu) != 0u) {
                wr8(r31 + 0x15u, 0u);
            } else {
                r4 = (u32)rd8(0x817fdfe9u);
                wr8(r4 - 0x7fac26c4u, rd8(r31 + 0x12u));
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = r29 & 0xffffu;
                a.r[3] = (u32)param_3 + 0x68u;
                a.r[4] = (u32)rd8((u32)param_3 + 0x64u);
                a.r[5] = (u32)rd8(r31 + 0x15u);
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80292f80u, &a);
            }
        }
    }
    a.r[0] = 0x8053d950u;
    (void)tc_call(0x8028d9f0u, &a);
    a.r[0] = r31;
    a.r[1] = 0x1707u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x80292870u, &a);
    return;
}
