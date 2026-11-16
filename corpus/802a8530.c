#include "tc_rt.h"

u32 fn_802a8530(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    r6 = rd32(0x805411dcu);
    if (r6 != 0u) {
        r4 = rd32(r6 + 0x50u);
        if (r4 != 0u) {
            r3 = (u32)rd16(r4 + 2u);
            r5 = r4 + (u32)rd16(r4 + 4u);
            r4 = (u32)rd8(r5 + 0xdu);
            r5 = (u32)rd8(r5 + 0xcu);
            if ((s32)((r5 + ((r4 << 8u) & 0xffffff00u)) & 0xffffu) <= (s32)(r3 - 8u)) {
                wr32(r6 + 0x50u, 0u);
                return 1u;
            }
            return 0u;
        }
    }
    return 1u;
}
