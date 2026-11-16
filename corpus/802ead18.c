#include "tc_rt.h"

void fn_802ead18(u32 param_1)
{
    u32 r4 = 0;
    r4 = param_1 + 4u;
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, r4);
    wr32(param_1 + 8u, r4);
    return;
}
