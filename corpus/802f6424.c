#include "tc_rt.h"

void fn_802f6424(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x84u, (u32)param_2);
    wr8((u32)param_1 + 0x7au, (u8)((((0u - (u32)param_2) & ~(u32)param_2) >> 0x1fu) & 1u));
    return;
}
