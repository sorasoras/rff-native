#include "tc_rt.h"

void fn_80094a24(u32 param_1, u32 param_2, u32 param_3)
{
    wr32(param_1, param_2);
    wr32(param_1 + 4u, param_3);
    wr32(param_1 + 8u, 0u);
    return;
}
