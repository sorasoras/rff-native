#include "tc_rt.h"

void fn_8021510c(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u);
    a.r[1] = param_3;
    a.r[2] = param_4;
    (void)tc_call(0x8021acc0u, &a);
    return;
}
