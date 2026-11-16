#include "tc_rt.h"

void fn_8016635c(u32 param_1, s32 param_2)
{
    u32 r5 = 0;
    TcArgs a = {0};
    (void)param_1;
    r5 = rd32((u32)param_2 + 0xf78u);
    r5 = r5 ^ (r5 & 0x4000u);
    wr32((u32)param_2 + 0xf78u, r5 ^ (r5 & 0x80000u));
    a.r[0] = (u32)param_2;
    (void)tc_call(0x800b516cu, &a);
    return;
}
