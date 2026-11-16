#include "tc_rt.h"

void fn_801e5f48(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    wr32(param_1, param_2);
    wr32(param_1 + 4u, param_3);
    wr32(param_1 + 8u, param_4);
    wr32(param_1 + 0xcu, param_5);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    return;
}
