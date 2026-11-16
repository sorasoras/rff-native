#include "tc_rt.h"

void fn_8004528c(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcb07a8u);
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    (void)tc_call(0x8004b7f4u, &a);
    return;
}
