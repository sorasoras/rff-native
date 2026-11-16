#include "tc_rt.h"

u32 fn_801f33e8(u32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    r7 = rd32(0x8033c284u);
    r6 = rd32(0x8033c288u);
    r5 = rd32(0x8033c28cu);
    r4 = rd32(0x8033c290u);
    wr32(0x817fdfe8u, rd32(0x8033c280u));
    wr32(0x817fdfecu, r7);
    wr32(0x817fdff0u, r6);
    wr32(0x817fdff4u, r5);
    wr32(0x817fdff8u, r4);
    return rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7e802018u);
}
