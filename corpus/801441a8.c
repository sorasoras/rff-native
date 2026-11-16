#include "tc_rt.h"

void fn_801441a8(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(param_1);
    wr32(param_1 + 8u, 9u);
    wr32(r4 + 0x28u, 0x2e8u);
    wr32(rd32(param_1) + 0x2cu, 0u);
    return;
}
