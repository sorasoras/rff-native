#include "tc_rt.h"

u32 fn_8021575c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    r4 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r3 = rd32(r4 + 0x148u);
    wr32(r4 + 0x148u, 0u);
    return r3;
}
