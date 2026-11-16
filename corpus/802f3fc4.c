#include "tc_rt.h"

void fn_802f3fc4(u32 param_1, u32 param_2)
{
    wr32(param_1, param_2);
    wr16(param_1 + 8u, 0x8000u);
    wr32(param_1 + 4u, 0u);
    wr8(param_1 + 0xcu, 1u);
    wr16(param_1 + 0xeu, 0x8000u);
    wr16(param_1 + 0xau, 0u);
    return;
}
