#include "tc_rt.h"

void fn_80036884(u32 param_1)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32(0x803a4bacu);
    while (r5 != 0u) {
        r0 = rd32(r5);
        if (r0 == 0u) break;
        r5 = r0;
    }
    if (r5 == 0u) {
        wr32(0x803a4bacu, param_1);
    } else {
        wr32(r5, param_1);
    }
    wr32(param_1, 0u);
    return;
}
