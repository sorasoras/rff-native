#include "tc_rt.h"

void fn_8017fde4(s32 param_1, s32 param_2)
{
    u32 r6 = 0;
    r6 = ((u32)param_1 << 2u) & 0xfffffffcu;
    wr32(r6 - 0x7fb27008u, rd32(r6 - 0x7fb27008u) - (u32)param_2);
    return;
}
