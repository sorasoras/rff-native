#include "tc_rt.h"

u32 fn_80176864(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0;
    r0 = rd32((u32)param_1 + 0x4cu);
    r4 = 1u;
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return r4;
        }
        if ((s32)r0 < 0) {
            return r4;
        }
        r4 = 1u;
        wr32((u32)param_1 + 0x4cu, 1u);
        wr32((u32)param_1 + 0x50u, 0u);
    } else {
        r4 = 0u;
        wr32((u32)param_1 + 0x4cu, 0u);
    }
    return r4;
}
