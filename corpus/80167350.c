#include "tc_rt.h"

void fn_80167350(u32 param_1, s32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2 + 0xf5cu;
    (void)tc_call(0x800f17bcu, &a);
    a.r[0] = (u32)param_2 + 0xf5cu;
    (void)tc_call(0x800f17e0u, &a);
    r4 = rd32((u32)param_2 + 0xf78u);
    r4 = r4 ^ (r4 & 0x4000u);
    wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) & 0xfbffffffu);
    wr32((u32)param_2 + 0xf78u, r4 ^ (r4 & 0x40u));
    return;
}
