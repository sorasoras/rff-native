#include "tc_rt.h"

void fn_8003f810(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x803be680u, param_2);
    wr32(0x803be67cu, 0xffffffffu);
    if ((param_2 & 8u) != 0u) {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = param_2;
        (void)tc_call(0x8003d1c8u, &a);
    } else {
        r9 = (u32)rd8(0x80571fd5u);
        r8 = (u32)rd8(0x80571fd6u);
        r0 = (u32)rd8(0x80571fd7u);
        wr8(0x817fdff8u, rd8(0x80571fd4u));
        wr8(0x817fdff9u, (u8)r9);
        wr8(0x817fdffau, (u8)r8);
        wr8(0x817fdffbu, (u8)r0);
        a.r[0] = 0x817fdff8u;
        a.r[1] = 0x817fdff8u;
        a.r[2] = 0x817fdff8u;
        a.r[3] = 0u;
        a.r[4] = param_2;
        (void)tc_call(0x8003d1c8u, &a);
    }
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 5u;
    (void)tc_call(0x8004b358u, &a);
    return;
}
