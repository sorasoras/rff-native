#include "tc_rt.h"

void fn_802911a8(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr8(0x817fdfe9u, 0x10u);
    r5 = (u32)rd8((u32)param_2 + 0xeu);
    r0 = (u32)rd8((u32)param_1 + 0x15u);
    wr8((u32)param_1 + 0x14u, (u8)r5);
    wr8((u32)param_1 + 0x1bu, rd8((u32)param_2 + 0xfu));
    if (r0 != 0u) {
        r0 = (u32)rd8(0x80571b80u);
        wr8(0x817fdfe9u, 0u);
        if (r0 >= 5u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x504u;
            a.r[1] = 0x80392bc0u;
            a.r[2] = r5;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc54u, &a);
        }
        if ((u32)rd8((u32)param_1 + 0x16u) == 0xffu) {
            a.r[0] = (u32)param_1 + 8u;
            a.r[1] = (u32)rd16((u32)param_1 + 0xeu);
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x802a2e70u, &a);
            f1 = tc_lastf();
            wr8(0x817fdfe9u, (u8)r3);
            if ((r3 & 0xffu) == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)rd8(0x817fdfe8u);
                a.r[2] = (u32)rd16((u32)param_1 + 0xeu);
                a.r[3] = 0u;
                a.r[4] = (u32)rd8((u32)param_1 + 0x13u);
                a.r[5] = (u32)rd8((u32)param_1 + 0x15u);
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80292f80u, &a);
                wr8((u32)rd8(0x817fdfe8u) - 0x7fac26c4u, rd8((u32)param_1 + 0x12u));
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0x1707u;
        a.r[2] = 0x817fdfe9u;
        (void)tc_call(0x80292870u, &a);
    } else {
        if (rd32(0x8053d950u) == 0u) {
            a.r[0] = (u32)rd16(rd32(0x80570e00u) + 8u);
            r3 = tc_call(0x8028a0d4u, &a);
            f1 = tc_lastf();
            wr32(0x8053d950u, r3);
            r5 = rd32(0x80570e00u);
            wr32(0x8053d938u, (u32)param_1);
            r5 = (u32)rd16(r5 + 8u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_2 + 8u;
            a.r[1] = r3;
            a.r[2] = r5;
            a.r[3] = 0x80291074u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802a27b4u, &a);
            f1 = tc_lastf();
            r5 = r3 & 0xffu;
            wr8(0x817fdfe9u, (u8)r3);
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
                    a.r[1] = 0x80392bf0u;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc6cu, &a);
                }
                wr8(0x817fdfe9u, 7u);
                a.r[0] = 0x8053d950u;
                (void)tc_call(0x8028d9f0u, &a);
            }
        }
        if ((u32)rd8(0x817fdfe9u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x1707u;
            a.r[2] = 0x817fdfe9u;
            (void)tc_call(0x80292870u, &a);
        }
    }
    return;
}
