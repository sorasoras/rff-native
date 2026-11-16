#include "tc_rt.h"

void fn_801c3bb8(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_2 + 0xd30u, 1u);
    a.r[0] = (u32)param_2;
    (void)tc_call(0x801c2d40u, &a);
    a.r[0] = (u32)param_2;
    (void)tc_call(0x801c34e4u, &a);
    wr32((u32)param_1 + 8u, 0u);
    return;
}
