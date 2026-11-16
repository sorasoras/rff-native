#include "tc_rt.h"

void fn_801c3608(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 4u, rd32((u32)param_1 + 8u));
    wr32((u32)param_1 + 8u, (u32)param_2);
    wr32((u32)param_1 + 0x14u, rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb23668u));
    return;
}
