#include "tc_rt.h"

void fn_801404c4(u32 param_1, s32 param_2, s32 param_3)
{
    TcArgs a = {0};
    a.r[0] = 6u;
    a.r[1] = (u32)rd16(rd32(param_1) + (((u32)param_2 - rd32(param_1 + 8u)) * 0x1au) + ((((u32)(s8)param_3 - 1u) << 1u) & 0xfffffffeu) + 8u);
    a.r[2] = 0u;
    (void)tc_call(0x801412f8u, &a);
    return;
}
