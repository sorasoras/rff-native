#include "tc_rt.h"

void fn_801d50b4(u32 param_1)
{
    u32 r5 = 0;
    wr32(param_1 + 4u, 0u);
    r5 = param_1 + 4u;
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0x10u, 0x80374aa8u);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, r5);
    wr32(param_1 + 8u, r5);
    wr32(param_1 + 0xcu, 0u);
    return;
}
