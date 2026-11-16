#include "tc_rt.h"

void fn_8030141c(u32 param_1)
{
    wr32(param_1, 0x8039d550u);
    wr32(param_1 + 4u, 0u);
    wr8(param_1 + 8u, 0x2fu);
    wr8(param_1 + 9u, 0u);
    return;
}
