#include "tc_rt.h"

void fn_800b516c(s32 param_1)
{
    u32 ctr = 0, r6 = 0, r7 = 0;
    r6 = (u32)param_1 + 0x146cu;
    r7 = 0u;
    ctr = 5u;
    do {
        wr32(r6, 0xffffffffu);
        wr32(r6 + 4u, 0u);
        wr32(r6 + 8u, 0u);
        wr32(r6 + 0xcu, 0u);
        wr32(r6 + 0x14u, 0u);
        wr32(r6 + 0x18u, 0u);
        wr32(r6 + 0x10u, 0u);
        if (r7 == 9u) {
            wr32(r6 + 0x20u, 0u);
        } else {
            wr32(r6 + 0x20u, r6 + 0x24u);
        }
        wr32(r6 + 0x24u, 0xffffffffu);
        r7 = r7 + 1u;
        wr32(r6 + 0x28u, 0u);
        wr32(r6 + 0x2cu, 0u);
        wr32(r6 + 0x30u, 0u);
        wr32(r6 + 0x38u, 0u);
        wr32(r6 + 0x3cu, 0u);
        wr32(r6 + 0x34u, 0u);
        if (r7 == 9u) {
            wr32(r6 + 0x44u, 0u);
        } else {
            wr32(r6 + 0x44u, r6 + 0x48u);
        }
        r6 = r6 + 0x48u;
        r7 = r7 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32((u32)param_1 + 0x15d4u, (u32)param_1 + 0x146cu);
    wr32((u32)param_1 + 0x15d8u, 0u);
    return;
}
