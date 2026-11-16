#include "tc_rt.h"

void fn_802f1c1c(u32 param_1)
{
    wr32(param_1, 0u);
    wr16(param_1 + 8u, 0x8000u);
    wr32(param_1 + 4u, 0u);
    wr8(param_1 + 0xcu, 0u);
    wr16(param_1 + 0xeu, 0x8000u);
    wr16(param_1 + 0xau, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr8(param_1 + 0x1cu, 0u);
    wr8(param_1 + 0x1du, 0u);
    wr32(param_1 + 0x38u, 0u);
    wr32(param_1 + 0x3cu, 0u);
    wr32(param_1 + 0x40u, 0u);
    wr32(param_1 + 0x44u, 0u);
    return;
}
