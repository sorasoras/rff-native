#include "tc_rt.h"

void fn_8030f140(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(param_1);
    if (r4 != 0u && rd32(r4 + 0x234u) == param_1) {
        wr32(r4 + 0x234u, 0u);
    }
    if (rd32(param_1) != 0u) {
        wr32(param_1, 0u);
        return;
    }
    return;
}
