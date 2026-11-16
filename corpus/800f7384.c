#include "tc_rt.h"

void fn_800f7384(u32 param_1, u32 param_2)
{
    wr32(param_1 + 4u, param_2);
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 0x80360478u);
    wr32(param_1 + 0x10u, 0u);
    return;
}
