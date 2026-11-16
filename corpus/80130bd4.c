#include "tc_rt.h"

void fn_80130bd4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = rd32((u32)param_1 + (((u32)param_3 << 2u) & 0xfffffffcu) + 0x2cu);
    r7 = rd32(0x8033a0b0u);
    r6 = rd32(0x8033a0b4u);
    wr32(0x817fdfe8u, rd32(0x8033a0acu));
    wr32(0x817fdfecu, r7);
    wr32(0x817fdff0u, r6);
    a.r[0] = r3;
    a.r[1] = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7e802018u);
    a.r[2] = 0u;
    (void)tc_call(0x800fe848u, &a);
    return;
}
