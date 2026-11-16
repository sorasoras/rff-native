#include "tc_rt.h"

void fn_802deaf8(u32 param_1)
{
    u32 r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u);
    r6 = rd32(param_1 + 4u);
    r5 = param_1 + 4u;
    while (r6 != r5) {
        r7 = rd32(r6);
        r4 = rd32(r6 + 4u);
        wr32(r7 + 4u, r4);
        wr32(r4, r7);
        wr32(param_1, rd32(param_1) - 1u);
        wr32(r6, 0u);
        wr32(r6 + 4u, 0u);
        r6 = r7;
    }
    return;
}
