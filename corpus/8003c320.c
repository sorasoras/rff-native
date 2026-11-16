#include "tc_rt.h"

void fn_8003c320(s32 param_1)
{
    wr32((u32)param_1 + 8u, 2u);
    wr32((u32)param_1 + 0x3cu, 2u);
    wr32((u32)param_1 + 0x70u, 2u);
    wr32((u32)param_1 + 0xa4u, 2u);
    wr32((u32)param_1 + 0xd8u, 2u);
    return;
}
