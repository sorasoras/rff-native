#include "tc_rt.h"

void fn_8008caec(u32 param_1, u32 param_2, u32 param_3)
{
    (void)param_2;
    wr32(param_1, param_3);
    wr32(param_1 + 4u, 0u);
    wr8(param_1 + 0x18u, 0u);
    wr16(param_1 + 0x14u, 0xffffu);
    wr32(param_1 + 8u, param_1 + 0x1cu);
    wr32(param_1 + 0x10u, 0u);
    wr8(param_1 + 0x17u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr8(param_1 + 0x16u, 0u);
    wr8(param_1 + 0x19u, 8u);
    return;
}
