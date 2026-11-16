#include "tc_rt.h"

void fn_8020c6ec(u32 param_1, u32 param_2, u32 param_3)
{
    wr32(param_1 + 4u, param_2);
    wr32(param_1, param_3);
    return;
}
