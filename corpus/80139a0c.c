#include "tc_rt.h"

void fn_80139a0c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = rd32(0x80574384u);
    wr32(0x817fdff8u, rd32(0x80574380u));
    r3 = rd32((u32)param_1 + 0x2cu);
    wr32(0x817fdffcu, r6);
    a.r[0] = r3;
    a.r[1] = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7e802008u);
    a.r[2] = 0u;
    (void)tc_call(0x800fe848u, &a);
    return;
}
