#include "tc_rt.h"

void fn_802d2408(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    r8 = (u32)rd8(param_3);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = (u32)rd8(param_3 + 1u);
    r6 = (u32)rd8(param_3 + 2u);
    r0 = (u32)rd8(param_3 + 3u);
    wr8(0x817fdff8u, (u8)r8);
    wr8(0x817fdff9u, (u8)r7);
    wr8(0x817fdffau, (u8)r6);
    wr8(0x817fdffbu, (u8)r0);
    a.r[0] = param_1;
    a.r[1] = (param_2 >> 1u) & 0x7fffffffu;
    a.r[2] = 0x817fdff8u;
    (void)tc_call(0x802d2450u, &a);
    return;
}
