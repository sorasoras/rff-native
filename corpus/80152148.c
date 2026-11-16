#include "tc_rt.h"

void fn_80152148(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x1a80u) + 1u;
    wr32((u32)param_1 + 0x1a80u, r0);
    if ((s32)r0 >= 30) {
        r0 = rd32((u32)param_1 + 0x148u);
        wr32((u32)param_1 + 0x1a80u, 0u);
        r0 = r0 & 0xbfffffffu;
        wr32((u32)param_1 + 0x148u, r0);
        return;
    }
    return;
}
