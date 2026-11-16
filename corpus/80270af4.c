#include "tc_rt.h"

void fn_80270af4(void)
{
    u32 ctr = 0, r5 = 0, r6 = 0;
    wr32(0x80571a98u, 0u);
    r5 = 0x805033a0u;
    r6 = 0x80503320u;
    wr32(0x80571a9cu, 0u);
    ctr = 2u;
    do {
        wr32(r5, 0u);
        wr32(r6, 0xffffffffu);
        wr32(r5 + 4u, 0u);
        wr32(r6 + 4u, 0xffffffffu);
        wr32(r5 + 8u, 0u);
        wr32(r6 + 8u, 0xffffffffu);
        wr32(r5 + 0xcu, 0u);
        wr32(r6 + 0xcu, 0xffffffffu);
        wr32(r5 + 0x10u, 0u);
        wr32(r6 + 0x10u, 0xffffffffu);
        wr32(r5 + 0x14u, 0u);
        wr32(r6 + 0x14u, 0xffffffffu);
        wr32(r5 + 0x18u, 0u);
        wr32(r6 + 0x18u, 0xffffffffu);
        wr32(r5 + 0x1cu, 0u);
        wr32(r6 + 0x1cu, 0xffffffffu);
        wr32(r5 + 0x20u, 0u);
        wr32(r6 + 0x20u, 0xffffffffu);
        wr32(r5 + 0x24u, 0u);
        wr32(r6 + 0x24u, 0xffffffffu);
        wr32(r5 + 0x28u, 0u);
        wr32(r6 + 0x28u, 0xffffffffu);
        wr32(r5 + 0x2cu, 0u);
        wr32(r6 + 0x2cu, 0xffffffffu);
        wr32(r5 + 0x30u, 0u);
        wr32(r6 + 0x30u, 0xffffffffu);
        wr32(r5 + 0x34u, 0u);
        wr32(r6 + 0x34u, 0xffffffffu);
        wr32(r5 + 0x38u, 0u);
        wr32(r6 + 0x38u, 0xffffffffu);
        wr32(r5 + 0x3cu, 0u);
        r5 = r5 + 0x40u;
        wr32(r6 + 0x3cu, 0xffffffffu);
        r6 = r6 + 0x40u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
