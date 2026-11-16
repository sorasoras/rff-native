#include "tc_rt.h"

void fn_8005c558(u32 param_1)
{
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0x8034fe48u);
    wr32(param_1 + 0xcu, 0x12u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x10u, 0x12u);
    wr32(param_1 + 0x2cu, 0u);
    wr32(param_1 + 0x30u, 0u);
    wr32(param_1 + 0x34u, 0xffffffffu);
    wr32(param_1 + 0x38u, 1u);
    return;
}
