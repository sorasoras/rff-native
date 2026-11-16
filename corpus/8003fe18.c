#include "tc_rt.h"

void fn_8003fe18(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = tc_call(0x8004514cu, &a);
    r0 = (u32)rd8(0x80571fdbu);
    wr8(0x817fdfe8u, (u8)r3);
    wr8(0x817fdfebu, (u8)r0);
    wr8(0x817fdfe9u, (u8)r3);
    wr8(0x817fdfeau, (u8)r3);
    wr32(0x817fdfecu, rd32(0x817fdfe8u));
    a.r[0] = 1u;
    a.r[1] = 0x817fdfecu;
    (void)tc_call(0x802535e8u, &a);
    (void)tc_call(0x8003d490u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8003f7c0u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8003f770u, &a);
    a.r[0] = param_1;
    a.r[1] = param_3;
    (void)tc_call(0x8003fd08u, &a);
    return;
}
