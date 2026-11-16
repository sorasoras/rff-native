#include "tc_rt.h"

void fn_80058b14(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r6 = 0, r7 = 0;
    r6 = (u32)param_1;
    r7 = 0u;
    ctr = 0x11u;
    do {
        wr32(r6 + 4u, 0u);
        r7 = r7 + 8u;
        wr32(r6 + 8u, 0u);
        wr32(r6 + 0xcu, 0u);
        wr32(r6 + 0x10u, 1u);
        wr32(r6 + 0x18u, 0u);
        wr32(r6 + 0x1cu, 0u);
        wr32(r6 + 0x20u, 0u);
        wr32(r6 + 0x24u, 1u);
        wr32(r6 + 0x2cu, 0u);
        wr32(r6 + 0x30u, 0u);
        wr32(r6 + 0x34u, 0u);
        wr32(r6 + 0x38u, 1u);
        wr32(r6 + 0x40u, 0u);
        wr32(r6 + 0x44u, 0u);
        wr32(r6 + 0x48u, 0u);
        wr32(r6 + 0x4cu, 1u);
        wr32(r6 + 0x54u, 0u);
        wr32(r6 + 0x58u, 0u);
        wr32(r6 + 0x5cu, 0u);
        wr32(r6 + 0x60u, 1u);
        wr32(r6 + 0x68u, 0u);
        wr32(r6 + 0x6cu, 0u);
        wr32(r6 + 0x70u, 0u);
        wr32(r6 + 0x74u, 1u);
        wr32(r6 + 0x7cu, 0u);
        wr32(r6 + 0x80u, 0u);
        wr32(r6 + 0x84u, 0u);
        wr32(r6 + 0x88u, 1u);
        wr32(r6 + 0x90u, 0u);
        wr32(r6 + 0x94u, 0u);
        wr32(r6 + 0x98u, 0u);
        wr32(r6 + 0x9cu, 1u);
        r6 = r6 + 0xa0u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = (u32)param_1 + (r7 * 0x14u);
    wr32(r3 + 4u, 0u);
    wr32(r3 + 8u, 0u);
    wr32(r3 + 0xcu, 0u);
    wr32(r3 + 0x10u, 1u);
    wr32(r3 + 0x18u, 0u);
    wr32(r3 + 0x1cu, 0u);
    wr32(r3 + 0x20u, 0u);
    wr32(r3 + 0x24u, 1u);
    wr32(r3 + 0x2cu, 0u);
    wr32(r3 + 0x30u, 0u);
    wr32(r3 + 0x34u, 0u);
    wr32(r3 + 0x38u, 1u);
    wr32(r3 + 0x40u, 0u);
    wr32(r3 + 0x44u, 0u);
    wr32(r3 + 0x48u, 0u);
    wr32(r3 + 0x4cu, 1u);
    return;
}
