#include "tc_rt.h"

u32 fn_80158744(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x120u);
    if (r4 == 1u || (r4 - 3u) <= 1u) {
        wr32((u32)param_1 + 0x120u, 1u);
    }
    return 1u;
}
