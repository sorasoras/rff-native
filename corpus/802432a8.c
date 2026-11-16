#include "tc_rt.h"

void fn_802432a8(void)
{
    u32 ctr = 0, r4 = 0, r5 = 0;
    wr32(0x805717e8u, 0u);
    r4 = 0x804e6400u;
    r5 = 0x804e6380u;
    ctr = 2u;
    do {
        wr32(r4, 0u);
        wr32(r5, 0u);
        wr32(r4 + 4u, 0u);
        wr32(r5 + 4u, 0u);
        wr32(r4 + 8u, 0u);
        wr32(r5 + 8u, 0u);
        wr32(r4 + 0xcu, 0u);
        wr32(r5 + 0xcu, 0u);
        wr32(r4 + 0x10u, 0u);
        wr32(r5 + 0x10u, 0u);
        wr32(r4 + 0x14u, 0u);
        wr32(r5 + 0x14u, 0u);
        wr32(r4 + 0x18u, 0u);
        wr32(r5 + 0x18u, 0u);
        wr32(r4 + 0x1cu, 0u);
        wr32(r5 + 0x1cu, 0u);
        wr32(r4 + 0x20u, 0u);
        wr32(r5 + 0x20u, 0u);
        wr32(r4 + 0x24u, 0u);
        wr32(r5 + 0x24u, 0u);
        wr32(r4 + 0x28u, 0u);
        wr32(r5 + 0x28u, 0u);
        wr32(r4 + 0x2cu, 0u);
        wr32(r5 + 0x2cu, 0u);
        wr32(r4 + 0x30u, 0u);
        wr32(r5 + 0x30u, 0u);
        wr32(r4 + 0x34u, 0u);
        wr32(r5 + 0x34u, 0u);
        wr32(r4 + 0x38u, 0u);
        wr32(r5 + 0x38u, 0u);
        wr32(r4 + 0x3cu, 0u);
        r4 = r4 + 0x40u;
        wr32(r5 + 0x3cu, 0u);
        r5 = r5 + 0x40u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
