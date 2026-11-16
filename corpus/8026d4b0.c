#include "tc_rt.h"

void fn_8026d4b0(u32 param_1, u32 param_2, u32 param_3)
{
    wr32(param_1, 0x805772b8u);
    wr32(param_1 + 4u, param_2);
    wr32(param_1 + 8u, param_3);
    wr32(param_1 + 0xcu, 0u);
    return;
}
