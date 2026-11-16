#include "tc_rt.h"

u32 fn_802deab0(u32 param_1, u32 param_2)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = rd32(param_2);
    r5 = rd32(r6);
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
    return r5;
}
