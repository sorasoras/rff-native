#include "tc_rt.h"

void fn_8023453c(void)
{
    u32 r3 = 0, r4 = 0;
    wr32(0x805715b4u, 0x80000000u);
    r4 = rd32(0x80000038u);
    wr32(0x805715b0u, r4);
    if (r4 != 0u) {
        r3 = rd32(r4 + 8u);
        wr32(0x805715a8u, r3);
        wr32(0x805715acu, r4 + (r3 * 0xcu));
        return;
    }
    return;
}
