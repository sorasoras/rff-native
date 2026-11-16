#include "tc_rt.h"

void fn_80216c48(u32 param_1)
{
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 4u);
    wr32(param_1, 0x80378798u);
    return;
}
