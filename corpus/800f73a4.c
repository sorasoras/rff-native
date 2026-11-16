#include "tc_rt.h"

void fn_800f73a4(u32 param_1)
{
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 0x80360478u);
    wr32(param_1 + 0x10u, 0u);
    return;
}
