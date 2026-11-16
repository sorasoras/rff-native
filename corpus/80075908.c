#include "tc_rt.h"

void fn_80075908(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r8 = 0, r9 = 0, r10 = 0;
    r9 = 0u;
    r10 = 0u;
    r3 = 0u;
    ctr = 0xbu;
    do {
        if (r10 != 9u) {
            r4 = rd32(r3 - 0x7fb6d3fcu);
            if ((s32)r4 > 0) {
                r8 = r4 - 1u;
                r9 = r9 | (((r10 & 0x20u) != 0u) ? 0u : (1u << (r10 & 0x1fu)));
                if ((s32)r8 < 0) {
                    r8 = 0u;
                }
                if (r8 == 0u) {
                    wr32(r3 - 0x7fb6d400u, 0u);
                } else {
                    wr32(r3 - 0x7fb6d400u, 1u);
                }
                wr32(r3 - 0x7fb6d3fcu, r8);
            }
        }
        r10 = r10 + 1u;
        r3 = r3 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(0x80492c58u, r9);
    return;
}
