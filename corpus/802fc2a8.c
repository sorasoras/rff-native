#include "tc_rt.h"

void fn_802fc2a8(u32 param_1)
{
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0x8039d420u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    return;
}
