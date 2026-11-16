#include "tc_rt.h"

void fn_801644a8(u32 param_1)
{
    u32 r4 = 0;
    r4 = param_1 + 0x18u;
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, r4);
    wr32(param_1 + 0x1cu, r4);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    return;
}
