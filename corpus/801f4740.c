#include "tc_rt.h"

u32 fn_801f4740(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = 0u;
    r4 = rd32((u32)param_1 + 0x40u);
    if (rd32((u32)param_1 + 0x20u) != 0u && rd32(r4) != ((u32)param_1 + 0x24u)) {
        r5 = 1u;
    }
    return r5;
}
