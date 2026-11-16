#include "tc_rt.h"

void fn_802d7ab8(u32 param_1, u32 param_2)
{
    wr16(param_1 + 0xau, (u16)param_2);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr16(param_1 + 8u, 0u);
    return;
}
