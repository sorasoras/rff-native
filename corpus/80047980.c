#include "tc_rt.h"

void fn_80047980(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = tc_argr(2u);
    for (;;) {
        r5 = rd32(0x803c2738u);
        if (r5 == rd32(0x803c273cu)) break;
        r5 = ((r5 << 3u) & 0xfffffff8u) - 0x7fc3d8f0u;
        r0 = rd32(r5 + 4u);
        r5 = rd32(r5);
        r0 = param_2 - (param_2 + ((r5 + (r0 > param_2)) > param_1));
        r0 = 0u - r0;
        if (r0 != 0u) {
            return;
        }
        r0 = rd32(0x803c2738u) + 1u;
        wr32(0x803c2738u, r0);
        if ((s32)r0 >= 5) {
            wr32(0x803c2738u, 0u);
        }
        wr32(0x803c1e34u, rd32(0x803c1e34u) + 1u);
    }
    return;
}
