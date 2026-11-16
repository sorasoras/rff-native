#include "tc_rt.h"

void fn_800500a8(u32 param_1, u32 param_2, u32 param_3)
{
    wr16(param_1 + 4u, (u16)param_3);
    wr16(param_1, 0u);
    wr16(param_1 + 2u, 0u);
    wr32(param_1 + 8u, param_2);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    return;
}
