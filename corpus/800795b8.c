#include "tc_rt.h"

void fn_800795b8(u32 param_1)
{
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0xffffffffu);
    wr32(param_1 + 8u, 0xffffffffu);
    return;
}
