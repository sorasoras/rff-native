#include "tc_rt.h"

void fn_800bea2c(u32 param_1)
{
    u32 ctr = 0, r3 = 0;
    r3 = param_1;
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, 0u);
    wr32(param_1 + 0x2cu, 0u);
    wr32(param_1 + 0x30u, 0u);
    wr32(param_1 + 0x34u, 0u);
    wr32(param_1 + 0x38u, 0u);
    wr32(param_1 + 0x3cu, 0u);
    wr32(param_1 + 0x40u, 0u);
    wr32(param_1 + 0x44u, 0u);
    wr32(param_1 + 0x48u, 0u);
    wr32(param_1 + 0x4cu, 0u);
    ctr = 0x5du;
    do {
        wr32(r3 + 0x50u, 0u);
        wr32(r3 + 0x54u, 0u);
        wr32(r3 + 0x58u, 0u);
        wr32(r3 + 0x5cu, 0xffffffffu);
        wr32(r3 + 0x60u, 0u);
        wr32(r3 + 0x64u, 0u);
        wr32(r3 + 0x68u, 0u);
        wr32(r3 + 0x6cu, 0xffffffffu);
        wr32(r3 + 0x70u, 0u);
        wr32(r3 + 0x74u, 0u);
        wr32(r3 + 0x78u, 0u);
        wr32(r3 + 0x7cu, 0xffffffffu);
        wr32(r3 + 0x80u, 0u);
        wr32(r3 + 0x84u, 0u);
        wr32(r3 + 0x88u, 0u);
        wr32(r3 + 0x8cu, 0xffffffffu);
        wr32(r3 + 0x90u, 0u);
        wr32(r3 + 0x94u, 0u);
        wr32(r3 + 0x98u, 0u);
        wr32(r3 + 0x9cu, 0xffffffffu);
        wr32(r3 + 0xa0u, 0u);
        wr32(r3 + 0xa4u, 0u);
        wr32(r3 + 0xa8u, 0u);
        wr32(r3 + 0xacu, 0xffffffffu);
        wr32(r3 + 0xb0u, 0u);
        wr32(r3 + 0xb4u, 0u);
        wr32(r3 + 0xb8u, 0u);
        wr32(r3 + 0xbcu, 0xffffffffu);
        wr32(r3 + 0xc0u, 0u);
        wr32(r3 + 0xc4u, 0u);
        wr32(r3 + 0xc8u, 0u);
        wr32(r3 + 0xccu, 0xffffffffu);
        r3 = r3 + 0x80u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
