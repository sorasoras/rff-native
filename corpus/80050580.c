#include "tc_rt.h"

void fn_80050580(s32 param_1)
{
    wr32((u32)param_1 + 4u, 0u);
    wr32((u32)param_1 + 8u, 0xffffffffu);
    wr32((u32)param_1 + 0xcu, 0x686f6765u);
    wr8((u32)param_1 + 0x18u, 0u);
    return;
}
