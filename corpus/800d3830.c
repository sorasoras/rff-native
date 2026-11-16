#include "tc_rt.h"

void fn_800d3830(s32 param_1, s32 param_2)
{
    u32 r4 = 0;
    r4 = (u32)param_2;
    if (param_2 >= 5) {
        r4 = 0u;
    }
    wr32((u32)param_1 + 0x518u, r4);
    wr32((u32)param_1 + 0x524u, rd32(((r4 << 2u) & 0xfffffffcu) - 0x7fb4ea68u));
    return;
}
