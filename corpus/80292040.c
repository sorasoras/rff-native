#include "tc_rt.h"

void fn_80292040(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr16(0x817fdfe8u, 0u);
    r31 = (u32)rd8((u32)param_2 + 8u);
    wr8(0x817fdfe9u, rd8((u32)param_1 + 0x16u));
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (u32)rd8((u32)param_1 + 0x16u);
    a.r[1] = (u32)rd8((u32)param_2 + 8u);
    a.r[2] = (u32)rd8((u32)param_2 + 9u);
    a.r[3] = (u32)rd16((u32)param_2 + 0xcu);
    a.r[4] = (u32)rd8((u32)param_2 + 0xau);
    a.r[5] = rd32((u32)param_2 + 0x10u);
    a.r[7] = param_r10;
    r3 = tc_call(0x802a312cu, &a);
    f1 = tc_lastf();
    r5 = r3 & 0xffu;
    if (r5 == 0u) {
        r5 = (u32)rd8((u32)param_2 + 8u);
        c0lt = (s32)r5 < 10;
        do {
            if (r5 != 0xau) {
                if (c0lt) {
                    c0lt = (s32)r5 < 1;
                    if (r5 == 1u) break;
                    if (!c0lt && (s32)r5 >= 4) {
                        wr16((u32)param_1 + 0x10u, (u16)r31);
                        fl_ = 1u;
                        break;
                    }
                }
                if ((u32)rd8(0x80571b80u) < 5u) {
                    fl_ = 1u;
                    break;
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x504u;
                a.r[1] = 0x80392eecu;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
                fl_ = 1u;
                break;
            }
        } while (0);
        if (fl_ == 1u) {
            fl_ = 0u;
        } else if ((u32)rd8((u32)param_2 + 9u) == 5u) {
            wr8((u32)param_1 + 0x17u, 1u);
        }
        if ((u32)rd8((u32)param_2 + 8u) == 1u) {
            r0 = (u32)rd8((u32)param_2 + 9u);
            if (r0 != 3u) {
                if (r0 == 4u) {
                    a.r[0] = 0x17u;
                    a.r[1] = (u32)rd8((u32)param_1 + 0x15u);
                    a.r[2] = (u32)param_1 + 8u;
                    (void)tc_call(0x8028d598u, &a);
                }
            } else {
                a.r[0] = 0x17u;
                a.r[1] = (u32)rd8((u32)param_1 + 0x15u);
                a.r[2] = (u32)param_1 + 8u;
                (void)tc_call(0x8028d530u, &a);
            }
        } else {
            a.r[0] = 0x17u;
            a.r[1] = (u32)rd8((u32)param_1 + 0x15u);
            a.r[2] = (u32)param_1 + 8u;
            (void)tc_call(0x8028d598u, &a);
            a.r[0] = 0x17u;
            a.r[1] = (u32)rd8((u32)param_1 + 0x15u);
            a.r[2] = (u32)param_1 + 8u;
            (void)tc_call(0x8028d564u, &a);
        }
    } else {
        if ((u32)rd8(0x80571b80u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x500u;
            a.r[1] = 0x80392ed0u;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc6cu, &a);
        }
        wr8(0x817fdfe8u, 6u);
        r0 = (u32)rd8((u32)param_2 + 8u);
        if (r0 == 1u || r0 == 0xau) {
            if ((u32)rd8((u32)param_2 + 9u) == 5u) {
                a.r[0] = 0xdu;
                a.r[1] = 0x817fdfe8u;
                a.r[2] = 0x8053d728u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
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
            }
        } else {
            a.r[0] = r31;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0x8053d728u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
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
        }
    }
    return;
}
