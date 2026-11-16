#include "tc_rt.h"

void fn_80190be4(u32 param_1)
{
    wr32(param_1 + 0xc0u, rd32(param_1) - 1u);
    return;
}
