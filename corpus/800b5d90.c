#include "tc_rt.h"

void fn_800b5d90(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0;
    wr32(0x8057073cu, 0xffffffffu);
    r4 = 0x8049e610u;
    r5 = 0u;
    ctr = 0xbu;
    do {
        wr32(r4, 0u);
        r5 = r5 + 0x10u;
        wr32(r4 + 0x10u, 0u);
        wr32(r4 + 0x20u, 0u);
        wr32(r4 + 0x30u, 0u);
        wr32(r4 + 0x40u, 0u);
        wr32(r4 + 0x50u, 0u);
        wr32(r4 + 0x60u, 0u);
        wr32(r4 + 0x70u, 0u);
        wr32(r4 + 0x80u, 0u);
        wr32(r4 + 0x90u, 0u);
        wr32(r4 + 0xa0u, 0u);
        wr32(r4 + 0xb0u, 0u);
        wr32(r4 + 0xc0u, 0u);
        wr32(r4 + 0xd0u, 0u);
        wr32(r4 + 0xe0u, 0u);
        wr32(r4 + 0xf0u, 0u);
        r4 = r4 + 0x100u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r4 = (r5 << 4u) & 0xfffffff0u;
    wr32(r4 - 0x7fb619f0u, 0u);
    r3 = r4 - 0x7fb619f0u;
    wr32(r3 + 0x10u, 0u);
    wr32(r3 + 0x20u, 0u);
    wr32(r3 + 0x30u, 0u);
    return;
}
