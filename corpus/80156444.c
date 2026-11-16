#include "tc_rt.h"

u32 fn_80156444(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 4u) - 1u;
    wr32((u32)param_1 + 4u, r4);
    return (((0u - r4) & ~r4) >> 0x1fu) & 1u;
}
