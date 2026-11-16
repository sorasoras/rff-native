#include "tc_rt.h"

s32 fn_801c38ac(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0;
    r4 = 0x804dc998u;
    r5 = 0u;
    ctr = 0x40u;
    do {
        if (rd32(r4) == 0u) {
            wr32(((r5 << 2u) & 0xfffffffcu) - 0x7fb23668u, param_1);
            return (s32)r5;
        }
        r4 = r4 + 4u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return -1;
}
