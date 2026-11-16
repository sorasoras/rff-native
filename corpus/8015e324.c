#include "tc_rt.h"

void fn_8015e324(s32 param_1)
{
    wr32((u32)param_1 + 0x128u, 6u);
    wr32((u32)param_1 + 0x130u, 1u);
    wr32((u32)param_1 + 0x134u, 0u);
    wr32((u32)param_1 + 0x138u, 1u);
    return;
}
