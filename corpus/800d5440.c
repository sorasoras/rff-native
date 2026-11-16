#include "tc_rt.h"

void fn_800d5440(s32 param_1)
{
    wr32((u32)param_1 + 0x4b8u, rd32((u32)param_1 + 0x4b8u) & 0xbfffffffu);
    return;
}
