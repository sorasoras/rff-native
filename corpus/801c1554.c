#include "tc_rt.h"

void fn_801c1554(u32 param_1)
{
    u32 r0 = 0;
    wr32(((rd32(0x804dc904u) << 2u) & 0xfffffffcu) - 0x7fb23744u, param_1);
    r0 = rd32(0x804dc904u) + 1u;
    wr32(0x804dc904u, r0);
    if ((s32)r0 > 16) {
        wr32(0x804dc904u, 0u);
        return;
    }
    return;
}
