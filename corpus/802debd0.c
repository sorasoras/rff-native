#include "tc_rt.h"

s32 fn_802debd0(u32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0;
    r6 = rd32(param_2);
    r5 = rd32(param_2 + 4u);
    wr32(r6 + 4u, r5);
    wr32(r5, r6);
    wr32(param_1, rd32(param_1) - 1u);
    wr32(param_2, 0u);
    wr32(param_2 + 4u, 0u);
    return (s32)r6;
}
