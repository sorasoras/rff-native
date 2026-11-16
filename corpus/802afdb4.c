#include "tc_rt.h"

void fn_802afdb4(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = 1u;
    if ((u32)rd8(param_r3 + 0x6du) != 0u) {
        r3 = 0u;
    }
    r29 = (r3 << 1u) & 0xfeu;
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    r30 = r3;
    if (r3 != 0u) {
        r31 = r3 + 0x11u;
        wr16(r3 + 4u, 9u);
        wr8(r31, (u8)(r29 | 1u | ((param_r4 << 2u) & 0x3fcu)));
        wr8(r31 + 1u, 0x73u);
        wr8(r31 + 2u, 1u);
        a.r[0] = 3u;
        a.r[1] = r31;
        r3 = tc_call(0x802b134cu, &a);
        wr8(r31 + 3u, (u8)r3);
        wr16(r30 + 2u, 4u);
        a.r[0] = param_r3;
        a.r[1] = r30;
        (void)tc_call(0x802b1ac8u, &a);
    }
    return;
}
