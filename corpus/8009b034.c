#include "tc_rt.h"

void fn_8009b034(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    wr32(param_1 + 8u, rd32(param_2));
    wr32(param_1 + 0xcu, rd32(param_2 + 4u));
    wr32(param_1 + 0x10u, rd32(param_2 + 8u));
    wr32(param_1 + 0x14u, rd32(param_2 + 0xcu));
    wr32(param_1 + 0x18u, rd32(param_2 + 0x10u));
    wr32(param_1 + 0x1cu, rd32(param_2 + 0x14u));
    wr32(param_1 + 0x20u, rd32(param_2 + 0x18u));
    wr32(param_1 + 0x24u, rd32(param_2 + 0x1cu));
    wr32(param_1 + 0x28u, rd32(param_2 + 0x20u));
    wr32(param_1 + 0x2cu, rd32(param_2 + 0x24u));
    wr32(param_1 + 0x30u, rd32(param_2 + 0x28u));
    wr32(param_1 + 0x34u, rd32(param_2 + 0x2cu));
    wr32(param_1 + 0x38u, rd32(param_2 + 0x30u));
    wr32(param_1 + 0x3cu, rd32(param_2 + 0x34u));
    r0 = rd32(param_2 + 0x38u);
    wr32(param_1 + 0x40u, r0);
    wr32(param_1 + 0x44u, rd32(param_2 + 0x3cu));
    wr32(param_1 + 0x48u, rd32(param_2 + 0x40u));
    if (r0 == 0u) {
        wr32(param_1 + 0x40u, 1u);
    }
    if (rd32(param_1 + 0x44u) == 0u) {
        wr32(param_1 + 0x44u, 1u);
    }
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 0x4cu, 0u);
    wr32(param_1 + 0x54u, 0u);
    wr32(param_1 + 0x58u, 0u);
    wr32(param_1 + 0x5cu, 0u);
    wr32(param_1 + 0x50u, 0u);
    wr32(param_1 + 0x60u, 0u);
    wr32(param_1 + 0x64u, 0u);
    wr32(param_1 + 0x68u, 0u);
    wr32(param_1 + 0x6cu, 0u);
    wr32(param_1 + 0x70u, 0u);
    wr32(param_1 + 0x74u, 0u);
    wr32(param_1 + 0x78u, 0u);
    wr32(param_1 + 0x7cu, 0u);
    wr32(param_1 + 0x80u, 0u);
    wr32(param_1 + 0x84u, 0u);
    wr32(param_1 + 0x88u, 0u);
    wr32(param_1 + 0x8cu, 0u);
    wr32(param_1 + 0x90u, 0u);
    wr32(param_1 + 0x94u, 0u);
    wr32(param_1 + 0x98u, 0u);
    wr32(param_1 + 0x9cu, 0u);
    wr32(param_1 + 0xa0u, 0u);
    wr32(param_1 + 0xa4u, param_1 + 0xccu);
    wr32(param_1 + 0xa8u, 0u);
    wr32(param_1 + 0xacu, 0u);
    wr32(param_1 + 0xb0u, 0u);
    wr32(param_1 + 0xb4u, 0u);
    wr32(param_1 + 0xb8u, 0u);
    wr32(param_1 + 0xbcu, 0u);
    wr32(param_1 + 0xc0u, 0u);
    wr32(param_1 + 0xc4u, 0u);
    wr32(param_1 + 0xc8u, 0u);
    return;
}
