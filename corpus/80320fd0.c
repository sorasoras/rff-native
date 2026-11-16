#include "tc_rt.h"

void fn_80320fd0(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    r0 = rd32(param_2 + 4u);
    wr32(param_1, rd32(param_2));
    wr32(param_1 + 4u, r0);
    return;
}
