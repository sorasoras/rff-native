#include "tc_rt.h"

void fn_802d7f1c(u32 param_1)
{
    u32 r5 = 0;
    wr32(param_1, 0x8039b2d0u);
    r5 = rd32(0x8039b26cu);
    wr32(param_1 + 4u, rd32(0x8039b268u));
    wr32(param_1 + 8u, r5);
    wr32(param_1 + 0xcu, rd32(0x8039b270u));
    wr32(param_1, 0x8039b278u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    return;
}
