#include "tc_rt.h"

void fn_801f8e74(u32 param_1)
{
    u32 r0 = 0;
    r0 = rd32(param_1);
    if (r0 != 0u) {
        if (r0 != 1u) {
            return;
        }
        if ((rd32(param_1 + 8u) + 0x10000u) == 0xffffu) {
            return;
        }
        wr32(param_1, 3u);
        return;
    }
    return;
}
