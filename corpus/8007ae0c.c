#include "tc_rt.h"

void fn_8007ae0c(u32 param_1)
{
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    return;
}
