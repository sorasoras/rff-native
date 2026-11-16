#include "tc_rt.h"

void fn_80036968(u32 param_1)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32(0x803a4bb0u);
    while (r5 != 0u) {
        r0 = rd32(r5);
        if (r0 == param_1) break;
        r5 = r0;
    }
    if (r5 == 0u) {
        if (rd32(0x803a4bb0u) != param_1) {
            return;
        }
        wr32(0x803a4bb0u, rd32(param_1));
    } else {
        wr32(r5, rd32(param_1));
    }
    wr32(param_1, rd32(0x803a4ba8u));
    wr32(0x803a4ba8u, param_1);
    return;
}
