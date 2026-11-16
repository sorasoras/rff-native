#include "tc_rt.h"

void fn_801a6410(u32 param_1)
{
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 0u);
    return;
}
