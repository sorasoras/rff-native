#include "tc_rt.h"

void fn_8016b39c(u32 param_1, s32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    (void)tc_call(0x800b2bccu, &a);
    a.r[0] = (u32)param_2;
    (void)tc_call(0x800b3354u, &a);
    r4 = rd32((u32)param_2 + 0xf78u);
    wr8((u32)param_2 + 0xd80u, 0u);
    wr8((u32)param_2 + 0xd81u, 0u);
    wr32((u32)param_2 + 0xf78u, r4 ^ (r4 & 1u));
    return;
}
