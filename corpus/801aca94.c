#include "tc_rt.h"

void fn_801aca94(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    (void)tc_call(0x80056f08u, &a);
    a.r[0] = (u32)param_1 + 0xf20u;
    (void)tc_call(0x801c2004u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801c2d40u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801e722cu, &a);
    return;
}
