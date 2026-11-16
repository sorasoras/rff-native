#include "tc_rt.h"

void fn_801d161c(s32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    r4 = rd32((u32)param_1 + 0x34cu);
    r7 = (u32)((s32)(param_4 & 0xffffu) >> 8);
    r8 = param_4 & 0xffu;
    r6 = (u32)((s32)param_4 >> 16);
    if ((r4 == 7u || r4 == 9u) && (u32)param_3 != 8u) {
        r8 = 0u;
    }
    if ((u32)param_3 > 0xdu) {
        return;
    }
    r4 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fc8c130u);
    sw_ = r4;
    switch (sw_) {
    case 0x801d1714u:
        return;
    case 0x801d166cu:
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = r8;
        a.r[3] = r6;
        a.r[4] = 0u;
        (void)tc_call(0x801d0c3cu, &a);
        return;
    case 0x801d167cu:
        a.r[0] = (u32)param_1;
        a.r[1] = 3u;
        a.r[2] = r8;
        a.r[3] = r6;
        a.r[4] = r7;
        (void)tc_call(0x801d0c3cu, &a);
        return;
    case 0x801d1688u:
        a.r[0] = (u32)param_1;
        a.r[1] = 4u;
        a.r[2] = r8;
        a.r[3] = r6;
        a.r[4] = 0u;
        (void)tc_call(0x801d0c3cu, &a);
        return;
    case 0x801d1698u:
        a.r[0] = (u32)param_1;
        a.r[1] = 5u;
        a.r[2] = r8;
        a.r[3] = r6;
        a.r[4] = 0u;
        (void)tc_call(0x801d0c3cu, &a);
        return;
    case 0x801d16e4u:
        a.r[0] = (u32)param_1;
        a.r[1] = 6u;
        a.r[2] = r8;
        a.r[3] = r6;
        a.r[4] = 0u;
        (void)tc_call(0x801d0c3cu, &a);
        return;
    case 0x801d16a8u:
        wr32((u32)param_1 + 0x38cu, rd32((u32)param_1 + 0x37cu));
        return;
    case 0x801d16b4u:
        f0 = (f64)rdf32(0x80575e98u);
        wr32((u32)param_1 + 0x334u, 1u);
        wrf32d((u32)param_1 + 0x330u, f0);
        return;
    case 0x801d16c8u:
        wr32((u32)param_1 + 0x334u, 2u);
        return;
    case 0x801d16f4u:
        a.r[0] = (u32)param_1;
        a.r[1] = 9u;
        a.r[2] = r8;
        a.r[3] = r6;
        a.r[4] = 0u;
        (void)tc_call(0x801d0c3cu, &a);
        return;
    case 0x801d1704u:
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = r8;
        a.r[3] = r6;
        a.r[4] = 0u;
        (void)tc_call(0x801d0c3cu, &a);
        return;
    case 0x801d16d4u:
        a.r[0] = (u32)param_1;
        a.r[1] = 0xau;
        a.r[2] = r8;
        a.r[3] = r6;
        a.r[4] = 0u;
        (void)tc_call(0x801d0c3cu, &a);
        return;
    default:
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = (u32)param_3;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = 0.0;
        r3 = tc_call(sw_, &a);
        r0 = 0u;
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        r11 = 0u;
        r12 = 0u;
        f0 = 0.0;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        f9 = 0.0;
        f10 = 0.0;
        f11 = 0.0;
        f12 = 0.0;
        f13 = 0.0;
        ctr = 0u;
        return;
    }
}
