#include "tc_rt.h"

u32 fn_802155c4(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x3e4u);
    wr32((u32)param_1 + 0x3e4u, 0u);
    return r3;
}
