#include "tc_rt.h"

void fn_80335834(u32 param_1, u32 param_2)
{
    u32 r4 = 0;
    r4 = rd32(param_2);
    r4 = rd32(r4 + 4u) + r4;
    wr32(param_1, r4 + 0xcu);
    return;
}
