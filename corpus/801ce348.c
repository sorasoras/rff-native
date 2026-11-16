#include "tc_rt.h"

void fn_801ce348(s32 param_1, s32 param_2, u32 param_r5, u32 param_r6)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(rd32((u32)param_1 + 0x324u) + (((u32)param_2 << 2u) & 0xfffffffcu));
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        (void)tc_call(0x801d161cu, &a);
        return;
    }
    return;
}
