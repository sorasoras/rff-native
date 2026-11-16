#include "tc_rt.h"

void fn_800423e8(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r5 = rd32(0x80335ca4u);
    r0 = rd32(0x80335ca8u);
    wr32(0x817fdfa8u, rd32(0x80335ca0u));
    wr32(0x817fdfacu, r5);
    wr32(0x817fdfb0u, r0);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = param_4;
    (void)tc_call(0x80041bd0u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0x817fdfa8u;
    (void)tc_call(0x80042290u, &a);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = param_1;
    a.r[2] = param_1;
    (void)tc_call(0x802337a0u, &a);
    return;
}
