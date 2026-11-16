#include "tc_rt.h"

void fn_802a4c20(u32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r4 = 0u;
    ctr = 4u;
    do {
        r0 = (r4 & 0xffu) * 0x34u;
        r6 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r6 + 0x10u) != 0u && (param_1 == (u32)rd16(r6 + 0x14u) || param_1 == (u32)rd16(r6 + 0x16u))) break;
        r4 = r4 + 1u;
        r0 = (r4 & 0xffu) * 0x34u;
        r6 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r6 + 0x10u) != 0u && (param_1 == (u32)rd16(r6 + 0x14u) || param_1 == (u32)rd16(r6 + 0x16u))) break;
        r4 = r4 + 1u;
        r0 = (r4 & 0xffu) * 0x34u;
        r6 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r6 + 0x10u) != 0u && (param_1 == (u32)rd16(r6 + 0x14u) || param_1 == (u32)rd16(r6 + 0x16u))) break;
        r4 = r4 + 1u;
        r0 = (r4 & 0xffu) * 0x34u;
        r6 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r6 + 0x10u) != 0u && (param_1 == (u32)rd16(r6 + 0x14u) || param_1 == (u32)rd16(r6 + 0x16u))) break;
        r4 = r4 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r0 = r4 & 0xffu;
    if (r0 != 0x10u) {
        r0 = r0 * 0x34u;
        r31 = r0 - 0x7fabf9d8u;
    }
    if (r31 != 0u) {
        if ((u32)rd8(0x80540a19u) >= 4u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x1e0003u;
            a.r[1] = 0x80395548u;
            a.r[2] = param_1;
            a.r[3] = (u32)param_2;
            a.r[4] = 0x1e0000u;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc84u, &a);
        }
        if ((u32)param_2 == 0u) {
            wr8(r31 + 1u, (u8)((u32)rd8(r31 + 1u) & 0xffffffdfu));
        } else {
            wr8(r31 + 1u, (u8)((u32)rd8(r31 + 1u) | 0x20u));
        }
    } else if ((u32)rd8(0x80540a19u) >= 2u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x1e0001u;
        a.r[1] = 0x80395510u;
        a.r[2] = param_1;
        a.r[3] = 0x1e0000u;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc6cu, &a);
    }
    return;
}
