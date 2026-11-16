#include "tc_rt.h"

void fn_8006142c(u32 param_1)
{
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0x8034ff28u);
    return;
}
