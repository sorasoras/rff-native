#include "tc_rt.h"

u32 fn_801c151c(void)
{
    u32 r3 = 0, r4 = 0;
    r4 = rd32(0x804dc900u);
    r3 = rd32(((rd32(0x804dc900u) << 2u) & 0xfffffffcu) - 0x7fb23744u);
    if ((s32)r4 < 16) {
        wr32(0x804dc900u, r4 + 1u);
        return r3;
    }
    wr32(0x804dc900u, 0u);
    return r3;
}
