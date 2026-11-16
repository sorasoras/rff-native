#include "tc_rt.h"

void fn_802974b8(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r28 = param_2;
    r29 = param_3;
    r30 = 0u;
    if (param_1 != 0u && param_1 != 1u) {
        return;
    }
    if ((u32)rd8(0x8053dfa6u) < 3u) {
        return;
    }
    if (param_2 == 0u) {
        r28 = 0x12u;
    }
    if (param_3 == 0u) {
        r29 = 0x800u;
    }
    if ((u32)rd8(0x80540118u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0002u;
        a.r[1] = 0x80393d0cu;
        a.r[2] = param_1;
        a.r[3] = r28;
        a.r[4] = r29;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc9cu, &a);
    }
    if (param_1 == 1u) {
        if (((r28 < 0x12u || r28 > 0x1000u) || (r29 < 0x12u || r29 > 0x1000u)) || r28 > r29) {
            return;
        }
        r30 = 2u;
    }
    if (r28 != (u32)rd16(0x8053eff4u) || r29 != (u32)rd16(0x8053eff6u)) {
        a.r[0] = 2u;
        r3 = tc_call(0x8028a274u, &a);
        if (r3 != 0u) {
            wr16(0x8053eff4u, (u16)r28);
            wr16(0x8053eff6u, (u16)r29);
            a.r[0] = r3;
            a.r[1] = r29;
            a.r[2] = r28;
            (void)tc_call(0x802a16b4u, &a);
        } else {
            return;
        }
    }
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        if ((u32)rd16(0x8053eff0u) != 0u) {
            r30 = (r30 | 1u) & 0xffu;
        }
        wr16(0x8053eff2u, (u16)param_1);
        a.r[0] = r3;
        a.r[1] = r30 & 0xffu;
        (void)tc_call(0x802a1684u, &a);
    }
    return;
}
