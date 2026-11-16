#include "tc_rt.h"

void fn_80060974(u32 param_1)
{
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0x8034fe88u);
    return;
}
