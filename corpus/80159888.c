#include "tc_rt.h"

void fn_80159888(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x34u, (rd32((u32)param_1 + 0x34u) & 0x7fffffffu) | (((u32)param_2 << 0x1fu) & 0x80000000u));
    return;
}
