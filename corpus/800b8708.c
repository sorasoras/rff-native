#include "tc_rt.h"

void fn_800b8708(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    r0 = rd32((u32)param_1 + 0x10u);
    c0lt = (s32)r0 < 3;
    if (r0 != 3u) {
        if (!c0lt) {
            return;
        }
        if (r0 != 0u) {
            return;
        }
    }
    wr32((u32)param_1 + 0x10u, 1u);
    return;
}
