#include "tc_rt.h"

void fn_801682f8(u32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    (void)param_1;
    r5 = rd32((u32)param_2 + 0xe88u);
    wr32((u32)param_2 + 0xe88u, r5 ^ (r5 & 0x800u));
    a.r[0] = (u32)param_2;
    (void)tc_call(0x800b3354u, &a);
    r4 = rd32((u32)param_2 + 0xf78u);
    wr8((u32)param_2 + 0x16d8u, 0u);
    wr32((u32)param_2 + 0xf78u, r4 ^ (r4 & 1u));
    a.r[0] = (u32)param_2 + 0x16d0u;
    (void)tc_call(0x80167914u, &a);
    return;
}
