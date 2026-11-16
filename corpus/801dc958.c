#include "tc_rt.h"

void fn_801dc958(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007f7e4u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801dc7f0u, &a);
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x14cu);
    (void)tc_call(0x801dfd30u, &a);
    return;
}
