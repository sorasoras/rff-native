#include "tc_rt.h"

void fn_80103008(u32 param_1)
{
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    return;
}
