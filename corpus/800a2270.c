#include "tc_rt.h"

void fn_800a2270(u32 param_1)
{
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    return;
}
