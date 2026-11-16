#include "tc_rt.h"

void fn_802fed8c(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(param_1);
    if (r4 != 0u && rd32(r4 + 0x280u) == param_1) {
        wr32(r4 + 0x280u, 0u);
    }
    if (rd32(param_1) != 0u) {
        wr32(param_1, 0u);
        return;
    }
    return;
}
