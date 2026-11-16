#include "tc_rt.h"

void fn_80040cd8(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    if ((u32)rd8(0x80571020u) == 0u) {
        (void)tc_call(0x80040f88u, &a);
    }
    a.r[0] = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fa8efe8u);
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    (void)tc_call(0x8003afb4u, &a);
    return;
}
