#include "tc_rt.h"

void fn_8016ae88(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    (void)tc_call(0x800b516cu, &a);
    r0 = rd32((u32)param_2 + 0x9cu);
    wr32((u32)param_2 + 0x1b0u, 0u);
    r0 = r0 & 0xfbffffffu;
    r0 = r0 & 0xdfffffffu;
    wr32((u32)param_2 + 0x9cu, r0);
    return;
}
