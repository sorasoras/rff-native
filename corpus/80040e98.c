#include "tc_rt.h"

void fn_80040e98(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    (void)param_3;
    (void)param_4;
    if ((u32)rd8(0x80571020u) == 0u) {
        (void)tc_call(0x80040f88u, &a);
    }
    a.r[0] = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fa8efe8u);
    a.r[1] = param_2;
    (void)tc_call(0x8003b3a4u, &a);
    return;
}
