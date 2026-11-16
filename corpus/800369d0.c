#include "tc_rt.h"

u32 fn_800369d0(void)
{
    u32 ctr = 0, r3 = 0;
    r3 = 0x803a3ea8u;
    ctr = 0x20u;
    do {
        if (rd32(r3 + 0x3cu) == 0u) {
            wr32(r3 + 0x3cu, 1u);
            return r3;
        }
        r3 = r3 + 0x40u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
