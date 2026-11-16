#include "tc_rt.h"

u32 fn_802ab5b4(void)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0;
    r5 = 0x80540a28u;
    r6 = 0u;
    ctr = 2u;
    do {
        if ((u32)rd8(r5) != 0u) {
            r4 = rd32(r5 + 8u);
            if (r4 == 0u || rd32(r5 + 4u) == 5u) {
                return 1u;
            }
            if (r4 == rd32(r5 + 0xcu) && (u32)rd8(r4) != 0u) {
                r4 = rd32(r4 + 4u);
                if ((r4 - 7u) <= 1u) {
                    return 1u;
                }
            }
        }
        r6 = r6 + 1u;
        if ((u32)rd8(r5 + 0x5cu) != 0u) {
            r4 = rd32(r5 + 0x64u);
            if (r4 == 0u || rd32(r5 + 0x60u) == 5u) {
                return 1u;
            }
            if (r4 == rd32(r5 + 0x68u) && (u32)rd8(r4) != 0u) {
                r4 = rd32(r4 + 4u);
                if ((r4 - 7u) <= 1u) {
                    return 1u;
                }
            }
        }
        r6 = r6 + 1u;
        r5 = r5 + 0xb8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
