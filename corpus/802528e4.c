#include "tc_rt.h"

void fn_802528e4(u32 param_1, s32 param_2, u32 param_3)
{
    wr32(param_1, ((((((u32)param_2 - 0x80000u) >> 9u) & 0x3ffu) | ((param_3 << 0xau) & 0x1ffc00u)) & 0xffffffu) | 0x65000000u);
    return;
}
