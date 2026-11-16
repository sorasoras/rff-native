#include "tc_rt.h"

void fn_802cb7b0(u32 param_1)
{
    wr8(param_1, 0u);
    wr8(param_1 + 1u, 0u);
    wr32(param_1 + 4u, 0u);
    return;
}
