#include "tc_rt.h"

void fn_8005a000(s32 param_1)
{
    wr32((u32)param_1 + 0x2bcu, 0u);
    wr32((u32)param_1 + 0x2c0u, 0u);
    wr32((u32)param_1 + 0xbcu, 0u);
    wr32((u32)param_1 + 0xc0u, 0u);
    return;
}
