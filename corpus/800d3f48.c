#include "tc_rt.h"

u32 fn_800d3f48(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x518u);
    if (r0 != 3u) {
        if (r0 == 4u) {
            return 1u;
        }
        return 0u;
    }
    return 1u;
}
