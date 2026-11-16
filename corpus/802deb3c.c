#include "tc_rt.h"

void fn_802deb3c(u32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0;
    if (rd32(param_1) != 0u) {
        r8 = rd32(param_1 + 4u);
        r5 = param_1 + 4u;
        wr32(param_1 + 8u, r5);
        wr32(param_1, 0u);
        wr32(param_1 + 4u, r5);
        while (r8 != r5) {
            r0 = rd32(r8);
            wr32(r8, 0u);
            wr32(r8 + 4u, 0u);
            r4 = rd32(param_1 + 4u);
            r7 = rd32(r4 + 4u);
            wr32(r8, r4);
            wr32(r8 + 4u, r7);
            wr32(r4 + 4u, r8);
            wr32(r7, r8);
            r8 = r0;
            wr32(param_1, rd32(param_1) + 1u);
        }
        return;
    }
    return;
}
