#include "tc_rt.h"

void fn_802afe64(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r0 = 1u;
    if ((u32)rd8(param_1 + 0x6du) != 0u) {
        r0 = 0u;
    }
    r28 = (r0 << 1u) & 0xfeu;
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    r29 = r3;
    if (r3 != 0u) {
        wr16(r3 + 4u, 9u);
        r30 = r3 + 0x11u;
        wr8(r30, (u8)(r28 | 1u | ((param_2 << 2u) & 0x3fcu)));
        wr8(r30 + 1u, (u8)(((u32)((s32)((0u - (u32)param_3) | (u32)param_3) >> 31) & 0x10u) | 0xfu));
        wr8(r30 + 2u, 1u);
        a.r[0] = 3u;
        a.r[1] = r30;
        r3 = tc_call(0x802b134cu, &a);
        wr8(r30 + 3u, (u8)r3);
        wr16(r29 + 2u, 4u);
        a.r[0] = param_1;
        a.r[1] = r29;
        (void)tc_call(0x802b1ac8u, &a);
    }
    return;
}
