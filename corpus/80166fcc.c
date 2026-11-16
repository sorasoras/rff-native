#include "tc_rt.h"

void fn_80166fcc(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) & 0xfbffffffu);
    a.r[0] = (u32)param_2 + 0xf5cu;
    (void)tc_call(0x800f17bcu, &a);
    r3 = rd32((u32)param_2 + 0xf78u);
    wr32((u32)param_2 + 0xf78u, r3 ^ (r3 & 0x4000u));
    return;
}
