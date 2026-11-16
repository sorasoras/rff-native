#include "tc_rt.h"

void fn_801c35e4(u32 param_1, u32 param_2)
{
    wr32(param_1, param_2);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x30u, 0u);
    wr32(param_1 + 0x2cu, 0u);
    return;
}
