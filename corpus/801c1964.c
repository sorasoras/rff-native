#include "tc_rt.h"

void fn_801c1964(u32 param_1)
{
    u32 r0 = 0;
    wr32(((rd32(0x804dc990u) << 2u) & 0xfffffffcu) - 0x7fb236f8u, param_1);
    r0 = rd32(0x804dc990u) + 1u;
    wr32(0x804dc990u, r0);
    if ((s32)r0 > 32) {
        wr32(0x804dc990u, 0u);
        return;
    }
    return;
}
